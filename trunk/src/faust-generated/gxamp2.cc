// generated from file '../src/faust/gxamp2.dsp' by dsp2cc:
// Code generated with Faust 0.9.30 (http://faust.grame.fr)

#include "valve.h"
namespace gxamp2 {
static double 	fConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
FAUSTFLOAT 	fslider0;
FAUSTFLOAT	*fslider0_;
#define fslider0 (*fslider0_)
static double 	fRec3[2];
static double 	fConst5;
static double 	fConst6;
static double 	fConst7;
FAUSTFLOAT 	fslider1;
FAUSTFLOAT	*fslider1_;
#define fslider1 (*fslider1_)
static double 	fRec10[2];
FAUSTFLOAT 	fslider2;
FAUSTFLOAT	*fslider2_;
#define fslider2 (*fslider2_)
static double 	fConst8;
static double 	fConst9;
static double 	fConst10;
static double 	fConst11;
static double 	fConst12;
static double 	fConst13;
static double 	fConst14;
static double 	fConst15;
static double 	fConst16;
static double 	fConst17;
static double 	fConst18;
static double 	fConst19;
static double 	fConst20;
static double 	fConst21;
static double 	fConst22;
static double 	fConst23;
static double 	fConst24;
static double 	fConst25;
static double 	fConst26;
static double 	fConst27;
static double 	fConst28;
static double 	fConst29;
static double 	fConst30;
static double 	fConst31;
static double 	fConst32;
static double 	fConst33;
static double 	fConst34;
static double 	fConst35;
static double 	fConst36;
static double 	fConst37;
static double 	fRec18[3];
static double 	fVec0[2];
static double 	fConst38;
static double 	fConst39;
static double 	fRec17[2];
static double 	fConst40;
static double 	fRec16[2];
static double 	fRec15[3];
static double 	fVec1[2];
static double 	fConst41;
static double 	fConst42;
static double 	fRec14[2];
static double 	fRec13[3];
static double 	fConst43;
static double 	fRec12[3];
static double 	fConst44;
static double 	fConst45;
static double 	fConst46;
static double 	fConst47;
static double 	fRec22[2];
static double 	fRec21[3];
static double 	fVec2[2];
static double 	fConst48;
static double 	fConst49;
static double 	fRec20[2];
static double 	fRec19[3];
static double 	fConst50;
static double 	fConst51;
static double 	fConst52;
static double 	fConst53;
static double 	fRec26[2];
static double 	fRec25[3];
static double 	fConst54;
static double 	fRec24[3];
static double 	fRec23[3];
static double 	fRec28[2];
static double 	fRec27[3];
static double 	fVec3[2];
static double 	fConst55;
static double 	fRec11[2];
FAUSTFLOAT 	fslider3;
FAUSTFLOAT	*fslider3_;
#define fslider3 (*fslider3_)
static double 	fRec29[2];
static double 	fConst56;
static double 	fConst57;
static double 	fConst58;
static double 	fConst59;
static double 	fRec30[2];
static double 	fRec9[3];
static double 	fConst60;
static double 	fRec8[2];
static double 	fConst61;
static double 	fRec7[2];
static double 	fConst62;
static double 	fConst63;
static double 	fConst64;
static double 	fConst65;
static double 	fRec31[2];
static double 	fRec6[3];
static double 	fRec5[2];
static double 	fRec4[2];
static double 	fRec2[3];
static double 	fConst66;
static double 	fConst67;
static double 	fConst68;
static double 	fConst69;
static double 	fRec32[2];
static double 	fRec1[3];
static double 	fRec0[2];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<3; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<3; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<3; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<3; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<3; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
}

static void init(int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (1.0 / tan((97.38937226128358 / fSamplingFreq)));
	fConst1 = (1 + fConst0);
	fConst2 = (0 - ((1 - fConst0) / fConst1));
	fConst3 = log((7539.822368615503 / fSamplingFreq));
	fConst4 = (0 - (1.8442 * cos(exp((0.07238887 + (fConst3 * (1.31282248 + (fConst3 * (0.43359433 + (fConst3 * (0.27547621 + (fConst3 * (0.06446806 + (0.00506158 * fConst3))))))))))))));
	fConst5 = (1.0 / tan((20517.741620594938 / fSamplingFreq)));
	fConst6 = (1 + fConst5);
	fConst7 = (0 - ((1 - fConst5) / fConst6));
	fConst8 = tan((942.4777960769379 / fSamplingFreq));
	fConst9 = (1.0 / faustpower<2>(fConst8));
	fConst10 = (2 * (1 - fConst9));
	fConst11 = (1.0 / fConst8);
	fConst12 = (1 + ((fConst11 - 1.0) / fConst8));
	fConst13 = (1.0 / (1 + ((1.0 + fConst11) / fConst8)));
	fConst14 = tan((3769.9111843077517 / fSamplingFreq));
	fConst15 = (1.0 / faustpower<2>(fConst14));
	fConst16 = (2 * (1 - fConst15));
	fConst17 = (1.0 / fConst14);
	fConst18 = (1 + ((fConst17 - 1.0000000000000004) / fConst14));
	fConst19 = (1 + ((fConst17 + 1.0000000000000004) / fConst14));
	fConst20 = (1.0 / fConst19);
	fConst21 = (1 + fConst17);
	fConst22 = (0 - ((1 - fConst17) / fConst21));
	fConst23 = tan((10053.096491487338 / fSamplingFreq));
	fConst24 = (1.0 / faustpower<2>(fConst23));
	fConst25 = (2 * (1 - fConst24));
	fConst26 = (1.0 / fConst23);
	fConst27 = (1 + ((fConst26 - 1.0000000000000004) / fConst23));
	fConst28 = (1 + ((1.0000000000000004 + fConst26) / fConst23));
	fConst29 = (1.0 / fConst28);
	fConst30 = (1 + fConst26);
	fConst31 = (0 - ((1 - fConst26) / fConst30));
	fConst32 = tan((47123.8898038469 / fSamplingFreq));
	fConst33 = (2 * (1 - (1.0 / faustpower<2>(fConst32))));
	fConst34 = (1.0 / fConst32);
	fConst35 = (1 + ((fConst34 - 1.414213562373095) / fConst32));
	fConst36 = (1 + ((1.414213562373095 + fConst34) / fConst32));
	fConst37 = (1.0 / fConst36);
	fConst38 = (0 - fConst0);
	fConst39 = (1.0 / (fConst1 * fConst36));
	fConst40 = (1.0 / fConst30);
	fConst41 = (0 - fConst17);
	fConst42 = (1.0 / (fConst21 * fConst28));
	fConst43 = (2 * (0 - fConst15));
	fConst44 = (1 + ((fConst11 - 1.0000000000000004) / fConst8));
	fConst45 = (1.0 / (1 + ((fConst11 + 1.0000000000000004) / fConst8)));
	fConst46 = (1 + fConst11);
	fConst47 = (0 - ((1 - fConst11) / fConst46));
	fConst48 = (0 - fConst11);
	fConst49 = (1.0 / (fConst46 * fConst19));
	fConst50 = (2 * (0 - fConst9));
	fConst51 = (1 + ((fConst17 - 1.0) / fConst14));
	fConst52 = (1.0 / (1 + ((1.0 + fConst17) / fConst14)));
	fConst53 = (0 - fConst26);
	fConst54 = (2 * (0 - fConst24));
	fConst55 = (1.0 / fConst6);
	fConst56 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst57 = (1 + fConst56);
	fConst58 = (0 - ((1 - fConst56) / fConst57));
	fConst59 = (0.027 / fConst57);
	fConst60 = (0.025 / fConst1);
	fConst61 = (0.77 / fConst6);
	fConst62 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst63 = (1 + fConst62);
	fConst64 = (0 - ((1 - fConst62) / fConst63));
	fConst65 = (0.015 / fConst63);
	fConst66 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst67 = (1 + fConst66);
	fConst68 = (0 - ((1 - fConst66) / fConst67));
	fConst69 = (0.0082 / fConst67);
	clear_state();
}

static void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (1.000000000000001e-05 * fslider1);
	double 	fSlow2 = fslider2;
	double 	fSlow3 = (1.25 * fSlow2);
	double 	fSlow4 = (2 * (fSlow2 - 0.5));
	double 	fSlow5 = (1 - max(0, fSlow4));
	double 	fSlow6 = pow(1e+01,(1.2 * fSlow2));
	double 	fSlow7 = (fConst45 * pow(1e+01,(2 * fSlow2)));
	double 	fSlow8 = pow(1e+01,(0.8 * fSlow2));
	double 	fSlow9 = (fConst45 * pow(1e+01,(0.9 * fSlow2)));
	double 	fSlow10 = (1 - max(0, (0 - fSlow4)));
	double 	fSlow11 = (0.0010000000000000009 * pow(10,(0.05 * fslider3)));
	for (int i=0; i<count; i++) {
		fRec3[0] = (fSlow0 + (0.999 * fRec3[1]));
		fRec10[0] = (fSlow1 + (0.999 * fRec10[1]));
		double fTemp0 = (1 - fRec10[0]);
		double fTemp1 = (double)input0[i];
		double fTemp2 = (fConst10 * fRec12[1]);
		fRec18[0] = ((fTemp1 * fRec10[0]) - (fConst37 * ((fConst35 * fRec18[2]) + (fConst33 * fRec18[1]))));
		double fTemp3 = (fRec18[2] + (fRec18[0] + (2 * fRec18[1])));
		fVec0[0] = fTemp3;
		fRec17[0] = ((fConst39 * ((fConst38 * fVec0[1]) + (fConst0 * fVec0[0]))) + (fConst2 * fRec17[1]));
		fRec16[0] = ((fConst40 * (fRec17[0] + fRec17[1])) + (fConst31 * fRec16[1]));
		fRec15[0] = (fRec16[0] - (fConst29 * ((fConst27 * fRec15[2]) + (fConst25 * fRec15[1]))));
		double fTemp4 = (fRec15[2] + (fRec15[0] + (2 * fRec15[1])));
		fVec1[0] = fTemp4;
		fRec14[0] = ((fConst42 * ((fConst41 * fVec1[1]) + (fConst17 * fVec1[0]))) + (fConst22 * fRec14[1]));
		fRec13[0] = (fRec14[0] - (fConst20 * ((fConst18 * fRec13[2]) + (fConst16 * fRec13[1]))));
		fRec12[0] = ((fConst20 * (((fConst15 * fRec13[0]) + (fConst43 * fRec13[1])) + (fConst15 * fRec13[2]))) - (fConst13 * ((fConst12 * fRec12[2]) + fTemp2)));
		double fTemp5 = max(-1, min(1, (fSlow6 * (fRec12[2] + (fConst13 * (fTemp2 + (fConst12 * fRec12[0])))))));
		fRec22[0] = ((fConst42 * (fVec1[0] + fVec1[1])) + (fConst22 * fRec22[1]));
		fRec21[0] = (fRec22[0] - (fConst20 * ((fConst18 * fRec21[2]) + (fConst16 * fRec21[1]))));
		double fTemp6 = (fRec21[2] + (fRec21[0] + (2 * fRec21[1])));
		fVec2[0] = fTemp6;
		fRec20[0] = ((fConst49 * ((fConst48 * fVec2[1]) + (fConst11 * fVec2[0]))) + (fConst47 * fRec20[1]));
		fRec19[0] = (fRec20[0] - (fConst45 * ((fConst44 * fRec19[2]) + (fConst10 * fRec19[1]))));
		double fTemp7 = max(-1, min(1, (fSlow7 * (((fConst9 * fRec19[0]) + (fConst50 * fRec19[1])) + (fConst9 * fRec19[2])))));
		double fTemp8 = (fConst10 * fRec23[1]);
		double fTemp9 = (fConst16 * fRec24[1]);
		fRec26[0] = ((fConst40 * ((fConst53 * fRec17[1]) + (fConst26 * fRec17[0]))) + (fConst31 * fRec26[1]));
		fRec25[0] = (fRec26[0] - (fConst29 * ((fConst27 * fRec25[2]) + (fConst25 * fRec25[1]))));
		fRec24[0] = ((fConst29 * (((fConst24 * fRec25[0]) + (fConst54 * fRec25[1])) + (fConst24 * fRec25[2]))) - (fConst52 * ((fConst51 * fRec24[2]) + fTemp9)));
		fRec23[0] = ((fRec24[2] + (fConst52 * (fTemp9 + (fConst51 * fRec24[0])))) - (fConst13 * ((fConst12 * fRec23[2]) + fTemp8)));
		double fTemp10 = max(-1, min(1, (fSlow8 * (fRec23[2] + (fConst13 * (fTemp8 + (fConst12 * fRec23[0])))))));
		fRec28[0] = ((fConst49 * (fVec2[0] + fVec2[1])) + (fConst47 * fRec28[1]));
		fRec27[0] = (fRec28[0] - (fConst45 * ((fConst44 * fRec27[2]) + (fConst10 * fRec27[1]))));
		double fTemp11 = max(-1, min(1, (fSlow9 * (fRec27[2] + (fRec27[0] + (2 * fRec27[1]))))));
		double fTemp12 = ((1.2589412 * (fTemp11 * (1 - (0.3333333333333333 * faustpower<2>(fTemp11))))) + (1.584893192 * ((fTemp10 * (1 - (0.3333333333333333 * faustpower<2>(fTemp10)))) + ((fTemp7 * (1 - (0.3333333333333333 * faustpower<2>(fTemp7)))) + (0.8413951417869425 * (fTemp5 * (1 - (0.3333333333333333 * faustpower<2>(fTemp5)))))))));
		fVec3[0] = fTemp12;
		fRec11[0] = ((fConst55 * (fVec3[0] + fVec3[1])) + (fConst7 * fRec11[1]));
		fRec29[0] = (fSlow11 + (0.999 * fRec29[1]));
		fRec30[0] = ((fConst59 * (fRec9[1] + fRec9[2])) + (fConst58 * fRec30[1]));
		fRec9[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fRec30[0] + (fRec29[0] * ((fSlow10 * fRec11[0]) + (fTemp1 * ((fSlow5 * fRec10[0]) + (fTemp0 * (1 + (fSlow3 * ((4 - (4 * fabs((fTemp1 * fTemp0)))) - 1))))))))) - 2.29615)) - 164.9574074074074);
		fRec8[0] = ((fConst60 * ((fConst38 * fRec9[1]) + (fConst0 * fRec9[0]))) + (fConst2 * fRec8[1]));
		fRec7[0] = ((fConst61 * (fRec8[0] + fRec8[1])) + (fConst7 * fRec7[1]));
		fRec31[0] = ((fConst65 * (fRec6[1] + fRec6[2])) + (fConst64 * fRec31[1]));
		fRec6[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec31[0] + (fRec29[0] * fRec7[0])) - 1.675587)) - 138.2942);
		fRec5[0] = ((fConst60 * ((fConst38 * fRec6[1]) + (fConst0 * fRec6[0]))) + (fConst2 * fRec5[1]));
		fRec4[0] = ((fConst61 * (fRec5[0] + fRec5[1])) + (fConst7 * fRec4[1]));
		fRec2[0] = ((fRec4[0] * fRec3[0]) - ((0.8502684100000001 * fRec2[2]) + (fConst4 * fRec2[1])));
		fRec32[0] = ((fConst69 * (fRec1[1] + fRec1[2])) + (fConst68 * fRec32[1]));
		fRec1[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec32[0] + fRec2[0]) - (1.130462 + (1.059 * fRec2[1])))) - 112.13878048780487);
		fRec0[0] = ((fConst60 * ((fConst38 * fRec1[1]) + (fConst0 * fRec1[0]))) + (fConst2 * fRec0[1]));
		output0[i] = (FAUSTFLOAT)(0.77 * fRec0[0]);
		// post processing
		fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec32[1] = fRec32[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		fRec5[1] = fRec5[0];
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec31[1] = fRec31[0];
		fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec30[1] = fRec30[0];
		fRec29[1] = fRec29[0];
		fRec11[1] = fRec11[0];
		fVec3[1] = fVec3[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec23[2] = fRec23[1]; fRec23[1] = fRec23[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fRec19[2] = fRec19[1]; fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fVec2[1] = fVec2[0];
		fRec21[2] = fRec21[1]; fRec21[1] = fRec21[0];
		fRec22[1] = fRec22[0];
		fRec12[2] = fRec12[1]; fRec12[1] = fRec12[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fVec1[1] = fVec1[0];
		fRec15[2] = fRec15[1]; fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fVec0[1] = fVec0[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec10[1] = fRec10[0];
		fRec3[1] = fRec3[0];
	}
}

static int register_params(const ParamReg& reg)
{
#undef fslider3
	fslider3_ = reg.registerVar("amp2.stage1.Pregain","","SA","",&fslider3, -6.0, -2e+01, 2e+01, 0.1);
#undef fslider2
	fslider2_ = reg.registerVar("gxdistortion.drive","","SA","",&fslider2, 0.35, 0.0, 1.0, 0.01);
#undef fslider1
	fslider1_ = reg.registerVar("gxdistortion.wet_dry","","SA","",&fslider1, 1e+02, 0.0, 1e+02, 1.0);
#undef fslider0
	fslider0_ = reg.registerVar("amp2.stage2.gain1","","SA","",&fslider0, -6.0, -2e+01, 2e+01, 0.1);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "6V6",  // id
    N_("6V6"),  // name
    0,  // groups
    compute,  // mono_audio
    0,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace gxamp2
