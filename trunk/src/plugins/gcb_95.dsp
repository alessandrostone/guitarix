// generated by scripts/build_GCB_95.py
// DO NOT MODIFY!
declare id "GCB_95";
declare name "GCB 95";
declare category "Guitar Effects";
declare description "Linear filter simulating the GCB 95 crybaby circuit";

import("filter.lib");

process = pre : iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) with {
    LogPot(a, x) = if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = if(b, 1 - x, x);
    s = 0.993;
    fs = float(SR);
    pre = dcblockerat(228.105325695);

    
        hotpotz = vslider("hotpotz[name:Wah]", 0.5, 0, 1, 0.01) : Inverted(1) : LogPot(5) : smooth(s);
    
    b0 = fs*(fs*(fs*(-7.41350388334374e-21*fs - 2.47418541205506e-16) - 3.69672787496925e-13) - 1.8397056665289e-12) + hotpotz*(pow(fs,2)*hotpotz*(fs*(1.96834437163512e-21*fs + 5.48587515516469e-17) + 8.09470493272714e-14) + fs*(fs*(fs*(-1.96653248770188e-21*fs - 5.48942867863191e-17) - 8.21432353321142e-14) - 1.78155704878595e-12));

    b1 = fs*(pow(fs,2)*(2.9654015533375e-20*fs + 4.94837082411013e-16) - 3.67941133305779e-12) + hotpotz*(pow(fs,3)*hotpotz*(-7.87337748654046e-21*fs - 1.09717503103294e-16) + fs*(pow(fs,2)*(7.86612995080753e-21*fs + 1.09788573572638e-16) - 3.56311409757189e-12));

    b2 = pow(fs,2)*(-4.44810233000624e-20*pow(fs,2) + 7.39345574993849e-13) + hotpotz*(pow(fs,2)*hotpotz*(1.18100662298107e-20*pow(fs,2) - 1.61894098654543e-13) + pow(fs,2)*(-1.17991949262113e-20*pow(fs,2) + 1.64286470664228e-13));

    b3 = fs*(pow(fs,2)*(2.9654015533375e-20*fs - 4.94837082411013e-16) + 3.67941133305779e-12) + hotpotz*(pow(fs,3)*hotpotz*(-7.87337748654046e-21*fs + 1.09717503103294e-16) + fs*(pow(fs,2)*(7.86612995080753e-21*fs - 1.09788573572638e-16) + 3.56311409757189e-12));

    b4 = fs*(fs*(fs*(-7.41350388334374e-21*fs + 2.47418541205506e-16) - 3.69672787496925e-13) + 1.8397056665289e-12) + hotpotz*(pow(fs,2)*hotpotz*(fs*(1.96834437163512e-21*fs - 5.48587515516469e-17) + 8.09470493272714e-14) + fs*(fs*(fs*(-1.96653248770188e-21*fs + 5.48942867863191e-17) - 8.21432353321142e-14) + 1.78155704878595e-12));

    a0 = fs*(fs*(fs*(1.08819023657393e-20*fs + 2.80985481683452e-17) + 5.44712113689982e-13) + 1.29191360120173e-11) + hotpotz*(pow(fs,2)*hotpotz*(fs*(-6.9672955745145e-20*fs - 9.30061422376548e-18) - 9.53707992555105e-14) + fs*(fs*(fs*(3.8766476861454e-19*fs + 2.92076464853813e-17) + 7.68323461702748e-14) + 2.16751816489796e-12)) + 4.92617764749537e-11;

    a1 = fs*(pow(fs,2)*(-4.3527609462957e-20*fs - 5.61970963366905e-17) + 2.58382720240347e-11) + hotpotz*(pow(fs,3)*hotpotz*(2.7869182298058e-19*fs + 1.8601228447531e-17) + fs*(pow(fs,2)*(-1.55065907445816e-18*fs - 5.84152929707626e-17) + 4.33503632979593e-12)) + 1.97047105899815e-10;

    a2 = pow(fs,2)*(6.52914141944355e-20*pow(fs,2) - 1.08942422737996e-12) + hotpotz*(pow(fs,2)*hotpotz*(-4.1803773447087e-19*pow(fs,2) + 1.90741598511021e-13) + pow(fs,2)*(2.32598861168724e-18*pow(fs,2) - 1.5366469234055e-13)) + 2.95570658849723e-10;

    a3 = fs*(pow(fs,2)*(-4.3527609462957e-20*fs + 5.61970963366905e-17) - 2.58382720240347e-11) + hotpotz*(pow(fs,3)*hotpotz*(2.7869182298058e-19*fs - 1.8601228447531e-17) + fs*(pow(fs,2)*(-1.55065907445816e-18*fs + 5.84152929707626e-17) - 4.33503632979593e-12)) + 1.97047105899815e-10;

    a4 = fs*(fs*(fs*(1.08819023657393e-20*fs - 2.80985481683452e-17) + 5.44712113689982e-13) - 1.29191360120173e-11) + hotpotz*(pow(fs,2)*hotpotz*(fs*(-6.9672955745145e-20*fs + 9.30061422376548e-18) - 9.53707992555105e-14) + fs*(fs*(fs*(3.8766476861454e-19*fs - 2.92076464853813e-17) + 7.68323461702748e-14) - 2.16751816489796e-12)) + 4.92617764749537e-11;
};