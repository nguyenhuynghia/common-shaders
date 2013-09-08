#define TAPS 16
const float luma_filter[TAPS + 1] = float[TAPS + 1](
   -0.000630,
   -0.000767,
   0.001319,
   0.002720,
   -0.000257,
   -0.005333,
   -0.004214,
   0.005549,
   0.012196,
   0.001808,
   -0.019590,
   -0.024126,
   0.011053,
   0.078409,
   0.147095,
   0.191711,
   0.206116
);

const float chroma_filter[TAPS + 1] = float[TAPS + 1](
   -0.000838,
   -0.000838,
   0.000146,
   0.002233,
   0.005511,
   0.010030,
   0.016636,
   0.023621,
   0.030762,
   0.037822,
   0.044559,
   0.050736,
   0.056132,
   0.060550,
   0.063829,
   0.065846,
   0.066527
);
