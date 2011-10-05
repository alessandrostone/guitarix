// generated from file '../src/faust/tonestack_default.dsp' by dsp2cc:
// Code generated with Faust 0.9.30 (http://faust.grame.fr)

namespace tonestack_default {
FAUSTFLOAT 	fslider0;
FAUSTFLOAT	*fslider0_;
#define fslider0 (*fslider0_)
FAUSTFLOAT 	fslider1;
FAUSTFLOAT	*fslider1_;
#define fslider1 (*fslider1_)
static double 	fConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
static double 	fConst5;
FAUSTFLOAT 	fslider2;
FAUSTFLOAT	*fslider2_;
#define fslider2 (*fslider2_)
static double 	fVec0[3];
static double 	fRec3[3];
static double 	fRec2[3];
static double 	fRec1[3];
static double 	fRec0[3];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<3; i++) fVec0[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

static void init(int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (15079.644737231007 / fSamplingFreq);
	fConst1 = cos(fConst0);
	fConst2 = (1.4142135623730951 * sin(fConst0));
	fConst3 = (3769.9111843077517 / fSamplingFreq);
	fConst4 = cos(fConst3);
	fConst5 = (1.4142135623730951 * sin(fConst3));
	clear_state();
}

static void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (fslider0 - 0.5);
	double 	fSlow1 = (10 * fSlow0);
	double 	fSlow2 = pow(10,(0.025 * ((20 * (fslider1 - 0.5)) - fSlow1)));
	double 	fSlow3 = (1 + fSlow2);
	double 	fSlow4 = (fConst1 * fSlow3);
	double 	fSlow5 = (2 * (0 - ((1 + fSlow4) - fSlow2)));
	double 	fSlow6 = (fConst1 * (fSlow2 - 1));
	double 	fSlow7 = (fConst2 * sqrt(fSlow2));
	double 	fSlow8 = (fSlow3 - (fSlow7 + fSlow6));
	double 	fSlow9 = pow(10,(0.25 * fSlow0));
	double 	fSlow10 = (1 + fSlow9);
	double 	fSlow11 = (fConst4 * fSlow10);
	double 	fSlow12 = (2 * (0 - ((1 + fSlow11) - fSlow9)));
	double 	fSlow13 = (fSlow9 - 1);
	double 	fSlow14 = (fConst4 * fSlow13);
	double 	fSlow15 = sqrt(fSlow9);
	double 	fSlow16 = (fConst5 * fSlow15);
	double 	fSlow17 = (fSlow10 - (fSlow16 + fSlow14));
	double 	fSlow18 = (fConst1 * fSlow10);
	double 	fSlow19 = (0 - (2 * ((fSlow9 + fSlow18) - 1)));
	double 	fSlow20 = (fConst2 * fSlow15);
	double 	fSlow21 = (fConst1 * fSlow13);
	double 	fSlow22 = ((1 + (fSlow9 + fSlow21)) - fSlow20);
	double 	fSlow23 = pow(10,(0.025 * ((20 * (exp((3.4 * (fslider2 - 1))) - 0.5)) - fSlow1)));
	double 	fSlow24 = (1 + fSlow23);
	double 	fSlow25 = (fConst4 * fSlow24);
	double 	fSlow26 = (0 - (2 * ((fSlow23 + fSlow25) - 1)));
	double 	fSlow27 = (fConst5 * sqrt(fSlow23));
	double 	fSlow28 = (fConst4 * (fSlow23 - 1));
	double 	fSlow29 = ((1 + (fSlow23 + fSlow28)) - fSlow27);
	double 	fSlow30 = (fSlow24 - (fSlow27 + fSlow28));
	double 	fSlow31 = (2 * (0 - ((1 + fSlow25) - fSlow23)));
	double 	fSlow32 = (fSlow23 + fSlow27);
	double 	fSlow33 = ((1 + fSlow32) - fSlow28);
	double 	fSlow34 = (1.0 / (1 + (fSlow28 + fSlow32)));
	double 	fSlow35 = (fSlow10 - (fSlow20 + fSlow21));
	double 	fSlow36 = (2 * (0 - ((1 + fSlow18) - fSlow9)));
	double 	fSlow37 = (fSlow9 + fSlow20);
	double 	fSlow38 = ((1 + fSlow37) - fSlow21);
	double 	fSlow39 = (1.0 / (1 + (fSlow21 + fSlow37)));
	double 	fSlow40 = (fSlow9 * ((1 + (fSlow9 + fSlow14)) - fSlow16));
	double 	fSlow41 = (fSlow9 + fSlow16);
	double 	fSlow42 = (fSlow9 * (1 + (fSlow14 + fSlow41)));
	double 	fSlow43 = (((fSlow9 + fSlow11) - 1) * (0 - (2 * fSlow9)));
	double 	fSlow44 = (1.0 / ((1 + fSlow41) - fSlow14));
	double 	fSlow45 = (fSlow2 * ((1 + (fSlow2 + fSlow6)) - fSlow7));
	double 	fSlow46 = (fSlow2 + fSlow7);
	double 	fSlow47 = (fSlow2 * (1 + (fSlow6 + fSlow46)));
	double 	fSlow48 = (((fSlow2 + fSlow4) - 1) * (0 - (2 * fSlow2)));
	double 	fSlow49 = (1.0 / ((1 + fSlow46) - fSlow6));
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		fVec0[0] = fTemp0;
		fRec3[0] = (fSlow34 * ((fSlow23 * (((fSlow33 * fVec0[0]) + (fSlow31 * fVec0[1])) + (fSlow30 * fVec0[2]))) - ((fSlow29 * fRec3[2]) + (fSlow26 * fRec3[1]))));
		fRec2[0] = (fSlow39 * ((fSlow9 * (((fSlow38 * fRec3[0]) + (fSlow36 * fRec3[1])) + (fSlow35 * fRec3[2]))) - ((fSlow22 * fRec2[2]) + (fSlow19 * fRec2[1]))));
		fRec1[0] = (fSlow44 * ((((fSlow43 * fRec2[1]) + (fSlow42 * fRec2[0])) + (fSlow40 * fRec2[2])) + (0 - ((fSlow17 * fRec1[2]) + (fSlow12 * fRec1[1])))));
		fRec0[0] = (fSlow49 * ((((fSlow48 * fRec1[1]) + (fSlow47 * fRec1[0])) + (fSlow45 * fRec1[2])) + (0 - ((fSlow8 * fRec0[2]) + (fSlow5 * fRec0[1])))));
		output0[i] = (FAUSTFLOAT)fRec0[0];
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fVec0[2] = fVec0[1]; fVec0[1] = fVec0[0];
	}
}

static int register_params(const ParamReg& reg)
{
#undef fslider2
	fslider2_ = reg.registerVar("amp.tonestack.Bass","","SA","",&fslider2, 0.5, 0.0, 1.0, 0.01);
#undef fslider1
	fslider1_ = reg.registerVar("amp.tonestack.Treble","","SA","",&fslider1, 0.5, 0.0, 1.0, 0.01);
#undef fslider0
	fslider0_ = reg.registerVar("amp.tonestack.Middle","","SA","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "default",  // id
    N_("default"),  // name
    0,  // groups
    compute,  // mono_audio
    0,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace tonestack_default
