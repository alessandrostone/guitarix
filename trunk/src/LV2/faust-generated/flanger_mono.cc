// generated from file '../src/LV2/faust/flanger_mono.dsp' by dsp2cc:
// Code generated with Faust 0.9.46 (http://faust.grame.fr)


namespace flanger_mono {

class Dsp: public PluginLV2 {
private:
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	int 	iVec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	int 	IOTA;
	double 	fVec1[2048];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	int 	iConst0;
	double 	fConst1;
	double 	fRec1[2];
	double 	fRec2[2];
	double 	fRec0[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(unsigned int samplingFreq);
	void compute(int count, float *input0, float *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(unsigned int samplingFreq, PluginLV2*);
	static void compute_static(int count, float *input0, float *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "flanger_mono";
	name = N_("Flanger Mono");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) iVec0[i] = 0;
	for (int i=0; i<2048; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	IOTA = 0;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (6.283185307179586 / iConst0);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

inline void Dsp::compute(int count, float *input0, float *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = fslider0;
	double 	fSlow1 = (1 - (0.01 * fSlow0));
	double 	fSlow2 = (0.01 * (fSlow0 * pow(10,(0.05 * fslider1))));
	double 	fSlow3 = (fConst1 * fslider2);
	double 	fSlow4 = sin(fSlow3);
	double 	fSlow5 = cos(fSlow3);
	double 	fSlow6 = (0 - fSlow4);
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		iVec0[0] = 1;
		double fTemp1 = (fSlow2 * fTemp0);
		double fTemp2 = ((0.5 * fRec0[1]) - fTemp1);
		fVec1[IOTA&2047] = fTemp2;
		fRec1[0] = ((fSlow5 * fRec1[1]) + (fSlow4 * fRec2[1]));
		fRec2[0] = ((1 + ((fSlow6 * fRec1[1]) + (fSlow5 * fRec2[1]))) - iVec0[1]);
		double fTemp3 = (iConst0 * (0.001 + (0.005 * (1 + fRec1[0]))));
		int iTemp4 = int(fTemp3);
		int iTemp5 = (1 + iTemp4);
		fRec0[0] = (((fTemp3 - iTemp4) * fVec1[(IOTA-int((int(iTemp5) & 2047)))&2047]) + ((iTemp5 - fTemp3) * fVec1[(IOTA-int((iTemp4 & 2047)))&2047]));
		output0[i] = (FAUSTFLOAT)((0.5 * (fTemp1 - fRec0[0])) + (fSlow1 * fTemp0));
		// post processing
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
		IOTA = IOTA+1;
		iVec0[1] = iVec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void Dsp::compute_static(int count, float *input0, float *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case FREQ: 
		fslider2_ = (float*)data; // , 0.2, 0.0, 5.0, 0.01 
		break;
	case LEVEL: 
		fslider1_ = (float*)data; // , 0.0, -6e+01, 1e+01, 0.1 
		break;
	case WET_DRY: 
		fslider0_ = (float*)data; // , 1e+02, 0.0, 1e+02, 1.0 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace flanger_mono
