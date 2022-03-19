#include "giwscli.h"

bool giwscli::quit = true;
bool giwscli::is_noelle = true;
bool giwscli::five_star_guarantee_number = false;
bool giwscli::four_star_guarantee_number = false;
bool giwscli::ach[12] = {false, false, false, false, false, false,
                         false, false, false, false, false, false};
size_t giwscli::kind = 0;
size_t giwscli::temp1 = 0;
size_t giwscli::fate_points = 0;
size_t giwscli::up_five = 0;
size_t giwscli::size_nup_four_c = 1;
size_t giwscli::countx = 0;
size_t giwscli::five_count = 0;
size_t giwscli::five_count_c = 0;
size_t giwscli::five_count_w = 0;
size_t giwscli::four_count = 0;
size_t giwscli::four_count_c = 0;
size_t giwscli::four_count_w = 0;
size_t giwscli::max_fivesth = 1;
size_t giwscli::min_fivesth = 1;
size_t giwscli::max_fivecount = 1;
size_t giwscli::min_fivecount = 1;
size_t giwscli::size_nup_four_w = 18;
size_t giwscli::kind_r_ach_11 = 0;
size_t giwscli::kind_r_ach_8 = 0;
size_t giwscli::up_five_g[2] = {0};
size_t giwscli::up_four_g[5] = {0};
size_t giwscli::nup_four_c[32] = {0};
size_t giwscli::five_check[2] = {MAX_ITEMS, MAX_ITEMS};
size_t giwscli::four_check[5] = {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS,
                                 MAX_ITEMS};
size_t giwscli::pcount[128] = {0};
size_t giwscli::four_pity[11] = {0};
size_t giwscli::five_pity[90] = {0};
size_t giwscli::five_pity_w[80] = {0};
const size_t giwscli::nup_five_c[5] = {0, 1, 2, 3, 4};
const size_t giwscli::nup_five_w[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
const size_t giwscli::nup_four_w[32] = {32, 33, 34, 35, 36, 37, 38, 39, 40,
                                        41, 42, 43, 44, 45, 46, 47, 48, 49};
const size_t giwscli::three_g[13] = {50, 51, 52, 53, 54, 55, 56,
                                     57, 58, 59, 60, 61, 62};
const size_t giwscli::nup_four_cg1[11] = {17, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg2[13] = {16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg3[14] = {15, 16, 17, 18, 19, 20, 21,
                                          22, 23, 24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg4[15] = {15, 16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30, 71};
const size_t giwscli::nup_four_cg5[16] = {15, 16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30, 71, 91};
const size_t giwscli::nup_four_cg6[17] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30, 71, 91, 95};
const size_t giwscli::nup_four_cg7[18] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30, 71, 91, 95, 100};
const size_t giwscli::nup_four_cg8[19] = {15, 16, 17, 18,  19, 20, 21,
                                          22, 23, 24, 25,  26, 28, 30,
                                          71, 91, 95, 100, 106};
const size_t giwscli::nup_four_cg9[20] = {15, 16, 17, 18,  19,  20, 21,
                                          22, 23, 24, 25,  26,  28, 30,
                                          71, 91, 95, 100, 106, 108};
const size_t giwscli::tempga1[30][3] = {
    {0, 0, 0},      // 0
    {22, 26, 30},   // 1
    {17, 20, 24},   // 2
    {18, 23, 25},   // 3
    {16, 19, 28},   // 4
    {17, 21, 22},   // 5
    {22, 24, 26},   // 6
    {16, 18, 25},   // 7
    {21, 23, 30},   // 8
    {19, 24, 26},   // 9
    {17, 20, 28},   // 10
    {15, 22, 30},   // 11
    {71, 20, 18},   // 12
    {16, 24, 25},   // 13
    {17, 22, 30},   // 14
    {15, 21, 28},   // 15
    {71, 23, 19},   // 16
    {91, 16, 18},   // 17
    {95, 17, 26},   // 18
    {15, 24, 25},   // 19
    {23, 19, 71},   // 20
    {100, 18, 91},  // 21
    {15, 20, 21},   // 22
    {26, 30, 106},  // 23
    {19, 23, 108},  // 24
    {24, 25, 71},   // 25
    {18, 22, 100},  // 26
    {16, 21, 95},   // 27
    {16, 21, 95},   // 28
    {16, 21, 95}    // 29
};
const size_t giwscli::tempga2[30][3] = {
    {0, 0, 0},      // 0
    {22, 26, 30},   // 1
    {17, 20, 24},   // 2
    {0, 23, 25},    // 3
    {0, 19, 28},    // 4
    {17, 21, 22},   // 5
    {22, 24, 26},   // 6
    {16, 18, 25},   // 7
    {21, 23, 30},   // 8
    {19, 24, 26},   // 9
    {17, 20, 28},   // 10
    {0, 22, 30},    // 11
    {71, 20, 18},   // 12
    {16, 24, 25},   // 13
    {17, 22, 30},   // 14
    {15, 21, 28},   // 15
    {71, 23, 19},   // 16
    {0, 16, 18},    // 17
    {0, 17, 26},    // 18
    {15, 24, 25},   // 19
    {23, 19, 71},   // 20
    {0, 18, 91},    // 21
    {15, 20, 21},   // 22
    {26, 30, 0},    // 23
    {19, 23, 0},    // 24
    {24, 25, 71},   // 25
    {18, 22, 100},  // 26
    {16, 21, 95},   // 27
    {16, 21, 95},   // 28
    {16, 21, 95}    // 29
};
const size_t giwscli::tempga3[30] = {
    MAX_ITEMS, 63, 64, 65, 66, 67, 68, 69, 0,   70,  63, 65, 66, 72,  64,
    86,        89, 90, 96, 94, 65, 70, 67, 105, 109, 66, 99, 96, 111, 89};

const size_t giwscli::tempgb1[6][3] = {
    {0, 0, 0},      // 0
    {15, 20, 21},   // 1
    {19, 23, 108},  // 2
    {24, 25, 71},   // 3
    {16, 21, 95},   // 4
    {16, 21, 95},   // 5
};
const size_t giwscli::tempgb2[6][3] = {
    {0, 0, 0},     // 0
    {15, 20, 21},  // 1
    {19, 23, 0},   // 2
    {24, 25, 71},  // 3
    {16, 21, 95},  // 4
    {16, 21, 95},  // 5
};
const size_t giwscli::tempgb3[6] = {MAX_ITEMS, 72, 69, 68, 94, 63};

const size_t giwscli::tempgc1[28][2] = {
    {0, 0},     // 0
    {5, 14},    // 1
    {7, 11},    // 2
    {6, 73},    // 3
    {74, 75},   // 4
    {8, 76},    // 5
    {5, 12},    // 6
    {9, 77},    // 7
    {11, 78},   // 8
    {13, 81},   // 9
    {6, 7},     // 10
    {73, 76},   // 11
    {14, 85},   // 12
    {7, 12},    // 13
    {87, 8},    // 14
    {92, 10},   // 15
    {93, 13},   // 16
    {97, 75},   // 17
    {98, 77},   // 18
    {101, 73},  // 19
    {78, 81},   // 20
    {85, 87},   // 21
    {107, 6},   // 22
    {110, 9},   // 23
    {74, 5},    // 24
    {112, 77},  // 25
    {97, 98},   // 26
    {113, 81}   // 27
};
const size_t giwscli::tempgc2[28][5] = {
    {0, 0, 0, 0, 0},         // 0
    {34, 38, 40, 44, 48},    // 1
    {33, 37, 41, 43, 49},    // 2
    {32, 36, 40, 42, 48},    // 3
    {35, 39, 41, 44, 46},    // 4
    {34, 37, 40, 45, 49},    // 5
    {35, 36, 41, 44, 47},    // 6
    {32, 36, 40, 43, 48},    // 7
    {33, 38, 46, 79, 80},    // 8
    {35, 41, 45, 82, 83},    // 9
    {39, 40, 43, 49, 84},    // 10
    {33, 36, 48, 79, 80},    // 11
    {32, 37, 41, 42, 47},    // 12
    {88, 46, 44, 40, 38},    // 13
    {82, 83, 84, 45, 41},    // 14
    {34, 39, 40, 43, 49},    // 15
    {35, 37, 41, 42, 47},    // 16
    {33, 38, 40, 44, 46},    // 17
    {34, 39, 41, 45, 48},    // 18
    {32, 36, 40, 49, 104},   // 19
    {38, 42, 47, 102, 103},  // 20
    {41, 43, 46, 83, 84},    // 21
    {37, 40, 44, 82, 88},    // 22
    {35, 38, 45, 48, 80},    // 23
    {33, 39, 41, 49, 79},    // 24
    {34, 36, 42, 47, 103},   // 25
    {37, 40, 46, 102, 104},  // 26
    {37, 40, 46, 102, 104}   // 27
};
const size_t giwscli::tempgc3[28][5] = {
    {0, 0, 0, 0, 0},       // 0
    {34, 38, 40, 44, 48},  // 1
    {33, 37, 41, 43, 49},  // 2
    {32, 36, 40, 42, 48},  // 3
    {35, 39, 41, 44, 46},  // 4
    {34, 37, 40, 45, 49},  // 5
    {35, 36, 41, 44, 47},  // 6
    {32, 36, 40, 43, 48},  // 7
    {33, 38, 46, 0, 0},    // 8
    {35, 41, 45, 0, 0},    // 9
    {39, 40, 43, 49, 0},   // 10
    {33, 36, 48, 0, 0},    // 11
    {32, 37, 41, 42, 47},  // 12
    {0, 46, 44, 40, 38},   // 13
    {0, 0, 0, 45, 41},     // 14
    {34, 39, 40, 43, 49},  // 15
    {35, 37, 41, 42, 47},  // 16
    {33, 38, 40, 44, 46},  // 17
    {34, 39, 41, 45, 48},  // 18
    {32, 36, 40, 49, 0},   // 19
    {38, 42, 47, 0, 0},    // 20
    {41, 43, 46, 0, 0},    // 21
    {37, 40, 44, 0, 0},    // 22
    {35, 38, 45, 48, 0},   // 23
    {33, 39, 41, 49, 0},   // 24
    {34, 36, 42, 47, 0},   // 25
    {37, 40, 46, 0, 0},    // 26
    {37, 40, 46, 0, 0}     // 27
};
const size_t giwscli::tempgc4[28][2] = {
    {0, 0},   // 0
    {5, 14},  // 1
    {7, 11},  // 2
    {6, 0},   // 3
    {0, 0},   // 4
    {8, 0},   // 5
    {5, 12},  // 6
    {9, 0},   // 7
    {11, 0},  // 8
    {13, 0},  // 9
    {6, 7},   // 10
    {0, 0},   // 11
    {14, 0},  // 12
    {7, 12},  // 13
    {0, 8},   // 14
    {0, 10},  // 15
    {0, 13},  // 16
    {0, 0},   // 17
    {0, 0},   // 18
    {0, 0},   // 19
    {0, 0},   // 20
    {0, 0},   // 21
    {0, 6},   // 22
    {0, 9},   // 23
    {0, 5},   // 24
    {0, 0},   // 25
    {0, 0},   // 26
    {0, 0}    // 27
};
const size_t giwscli::nup_four_cg31[14] = {17, 19, 20, 21, 22, 23, 24,
                                           25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg32[16] = {16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg33[17] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg34[18] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31, 71};
const size_t giwscli::nup_four_cg35[19] = {
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91};
const size_t giwscli::nup_four_cg36[20] = {15, 16, 17, 18, 19, 20, 21,
                                           22, 23, 24, 25, 26, 27, 28,
                                           29, 30, 31, 71, 91, 95};
const size_t giwscli::nup_four_cg37[21] = {15, 16, 17, 18, 19, 20, 21,
                                           22, 23, 24, 25, 26, 27, 28,
                                           29, 30, 31, 71, 91, 95, 100};
const size_t giwscli::nup_four_cg38[22] = {15, 16, 17, 18, 19,  20, 21, 22,
                                           23, 24, 25, 26, 27,  28, 29, 30,
                                           31, 71, 91, 95, 100, 106};
const size_t giwscli::nup_four_cg39[23] = {15, 16, 17, 18, 19,  20,  21, 22,
                                           23, 24, 25, 26, 27,  28,  29, 30,
                                           31, 71, 91, 95, 100, 106, 108};
const ptrdiff_t giwscli::tempga4[9] = {0, 1, 0, 2, 3, 0, 4, 5, 0};
const ptrdiff_t giwscli::tempgb4[6] = {0, 22, 24, 25, 27, 28};
unsigned int giwscli::resultt = 0;
unsigned int giwscli::resultu = 0;
unsigned int giwscli::lang_status = 0;
unsigned int giwscli::star = 0;
unsigned int giwscli::type = 0;
ptrdiff_t giwscli::chosen_event = 0;
ptrdiff_t giwscli::chosen_banner = 0;
ptrdiff_t giwscli::unmet4_c = 0;
ptrdiff_t giwscli::unmet4_w = 0;
ptrdiff_t giwscli::unmet5_c = 0;
ptrdiff_t giwscli::unmet5_w = 0;
ptrdiff_t giwscli::switch_b_should_be = 0;
ptrdiff_t giwscli::switch_e_should_be = 0;
ptrdiff_t giwscli::switch_b_sav = 0;
ptrdiff_t giwscli::switch_e_sav = 0;
ptrdiff_t giwscli::e_sav = 0;
ptrdiff_t giwscli::four_star_assurance_number = 1;
ptrdiff_t giwscli::five_star_assurance_number = 1;
ptrdiff_t giwscli::max_fives = 1;
ptrdiff_t giwscli::min_fives = PTRDIFF_MAX;
ptrdiff_t giwscli::five_weight = 0;
ptrdiff_t giwscli::four_weight = 0;
ptrdiff_t giwscli::three_weight = 0;
ptrdiff_t giwscli::fate_weapon = 0;
ptrdiff_t giwscli::ave_fives = 0;
ptrdiff_t giwscli::ach_count[12] = {0};
signed int giwscli::error_code = 0;
signed int giwscli::full_q = 0;

void giwscli::ini_ams(size_t *in, size_t ins, const size_t *out) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = out[i];
  }
}  // for of the same size

void giwscli::set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                         const size_t *nup_four_cgm) {
  up_five = tempga3[sw];
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempga1[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 3, tempga2[sw]);
}

void giwscli::set_pool_3(const ptrdiff_t sw, size_t size_nup_four_c_p,
                         const size_t *nup_four_cgm) {
  ini_ams(up_five_g, 2, tempgc1[sw]);
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 5, tempgc2[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 5, tempgc3[sw]);
  ini_ams(five_check, 2, tempgc4[sw]);
}

void giwscli::pool_stair_1(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_1(chosen_event_p, 11, nup_four_cg1);
  } else if (chosen_event_p < 12) {
    set_pool_1(chosen_event_p, 13, nup_four_cg2);
  } else if (chosen_event_p < 14) {
    set_pool_1(chosen_event_p, 14, nup_four_cg3);
  } else if (chosen_event_p < 18) {
    set_pool_1(chosen_event_p, 15, nup_four_cg4);
  } else if (chosen_event_p < 20) {
    set_pool_1(chosen_event_p, 16, nup_four_cg5);
  } else if (chosen_event_p < 22) {
    set_pool_1(chosen_event_p, 17, nup_four_cg6);
  } else if (chosen_event_p < 24) {
    set_pool_1(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 26) {
    set_pool_1(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 30) {
    set_pool_1(chosen_event_p, 20, nup_four_cg9);
  } else {
    error_code = 5;
    full_quit_e();
  }
}

void giwscli::pool_stair_2(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 2) {
    set_pool_3(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 4) {
    set_pool_3(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 6) {
    set_pool_3(chosen_event_p, 20, nup_four_cg9);
  } else {
    error_code = 5;
    full_quit_e();
  }
}

void giwscli::pool_stair_3(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_3(chosen_event_p, 11, nup_four_cg1);
  } else if (chosen_event_p < 11) {
    set_pool_3(chosen_event_p, 13, nup_four_cg2);
  } else if (chosen_event_p < 13) {
    set_pool_3(chosen_event_p, 14, nup_four_cg3);
  } else if (chosen_event_p < 17) {
    set_pool_3(chosen_event_p, 15, nup_four_cg4);
  } else if (chosen_event_p < 19) {
    set_pool_3(chosen_event_p, 16, nup_four_cg5);
  } else if (chosen_event_p < 21) {
    set_pool_3(chosen_event_p, 17, nup_four_cg6);
  } else if (chosen_event_p < 23) {
    set_pool_3(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 25) {
    set_pool_3(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 28) {
    set_pool_3(chosen_event_p, 20, nup_four_cg9);
  } else {
    error_code = 5;
    full_quit_e();
  }
}
void giwscli::pool_stair_4(ptrdiff_t chosen_event_p) {
  switch (chosen_event_p) {
    case 1: {
      size_nup_four_c = 14;
      ini_ams(nup_four_c, 14, nup_four_cg31);
    } break;
    case 2: {
      size_nup_four_c = 16;
      ini_ams(nup_four_c, 16, nup_four_cg32);
    } break;
    case 3: {
      size_nup_four_c = 17;
      ini_ams(nup_four_c, 17, nup_four_cg33);
    } break;
    case 4: {
      size_nup_four_c = 18;
      ini_ams(nup_four_c, 18, nup_four_cg34);
    } break;
    case 5: {
      size_nup_four_c = 19;
      ini_ams(nup_four_c, 19, nup_four_cg35);
    } break;
    case 6: {
      size_nup_four_c = 20;
      ini_ams(nup_four_c, 20, nup_four_cg36);
    } break;
    case 7: {
      size_nup_four_c = 21;
      ini_ams(nup_four_c, 21, nup_four_cg37);
    } break;
    case 8: {
      size_nup_four_c = 22;
      ini_ams(nup_four_c, 22, nup_four_cg38);
    } break;
    case 9: {
      size_nup_four_c = 22;
      ini_ams(nup_four_c, 23, nup_four_cg39);
    } break;
    default: {
      full_quit_e();
    }
  }
}
size_t giwscli::rspick(const size_t *kindx, size_t sizekind) {
  size_t kindout = kindx[0];
  size_t index = 1;
  for (; index < sizekind; ++index) {
    const signed int temp121 = static_cast<signed int>(
        generatorz() % (static_cast<unsigned long long int>(index) + 1));
    if (temp121 == 0) {
      kindout = kindx[index];
    }
  }
  return kindout;
}
// randomly pick an element among kindx which size is sizekind

unsigned int giwscli::WRSpick(const ptrdiff_t *weightx, size_t nom) {
  ptrdiff_t ceilling = 1;
  for (size_t inin = 0; inin < nom; inin++) {
    ceilling += weightx[inin];
  }
  const unsigned int typess1[3] = {0, 1, 2};
  const unsigned int typess2[2] = {0, 1};
  if (nom == 3 && ceilling > 10000) {
    ceilling = 10000;
  }
  ptrdiff_t randomn =
      static_cast<ptrdiff_t>(generatorz() % static_cast<size_t>(ceilling));
  size_t tc = 0;
  unsigned int results = 0;
  for (size_t inin = 0; inin < nom; inin++) {
    if (randomn < weightx[inin]) {
      if (nom == 3) {
        results = typess1[tc];
      } else {
        results = typess2[tc];
      }
      inin = nom;
    } else {
      randomn -= weightx[inin];
      tc++;
    }
  }
  return results;
}
// weighted random sampling

void giwscli::full_quit_e [[noreturn]] () {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  full_q = std::cin.get();
  std::exit(error_code);
}

void giwscli::tri() {
  star = 3;
  kind = rspick(three_g, 13);
  if (ach_count[8] < 7) {
    if (kind_r_ach_8 != kind) {
      kind_r_ach_8 = kind;
      ach_count[8] = 0;
    } else {
      ach_count[8]++;
    }
  }
}  // 3-star kind settler for all banners

void giwscli::mpcheck() {
  if (countx == 2 || countx == 6 || countx == 30 || countx == 126 ||
      countx == 8190 || countx == 131070 || countx == 524286 ||
      countx == 2147483646 || countx == 2305843009213693950) {
    ach[7] = true;
  }
  if (countx == 20192977) {
    ach[9] = true;
  }
  if (countx == 157087284) {
    ach[10] = true;
  }
}

void giwscli::core_f_1() {
  if (five_star_assurance_number < 74) {
    five_weight = 60;
  } else {
    five_weight = 60 + 600 * (five_star_assurance_number - 73);
  }
  if (four_star_assurance_number < 9) {
    four_weight = 510;
  } else {
    four_weight = 510 + 5100 * (four_star_assurance_number - 8);
  }
  three_weight = 9430;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_pity[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (five_star_guarantee_number || temp1 < 1) {
        type = 1;
        five_count_c++;
        kind = up_five;
        if (!five_star_guarantee_number) {
          ach_count[0] = 0;
          ach_count[1]++;
        }
        five_star_guarantee_number = false;
      } else {
        type = 2;
        five_count_c++;
        kind = rspick(nup_five_c, 5);
        if (kind == five_check[0]) {
          five_star_guarantee_number = false;
          ach_count[0] = 0;
          ach_count[1]++;
        } else {
          five_star_guarantee_number = true;
          ach_count[0]++;
          ach_count[1] = 0;
        }
      }  // 5-star kind settler for banner I
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      if (four_star_guarantee_number || temp1 < 1) {
        type = 1;
        four_count_c++;
        unmet4_c = 0;
        kind = rspick(up_four_g, 3);
        four_star_guarantee_number = false;
      } else {
        if (unmet4_c < 17 && unmet4_w < 17) {
          const ptrdiff_t weight1[2] = {255, 255};
          resultu = WRSpick(weight1, 2);
          switch (resultu) {
            case 0: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        } else if (unmet4_c > 16) {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_c - 16), 255};
          resultu = WRSpick(weight1, 2);
          switch (resultu) {
            case 0: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        } else {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_w - 16), 255};
          resultu = WRSpick(weight1, 2);
          switch (resultu) {
            case 0: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
            } break;
            case 1: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void giwscli::core_f_3() {
  if (five_star_assurance_number < 63) {
    five_weight = 70;
  } else if (five_star_assurance_number < 74) {
    five_weight = 70 + 700 * (five_star_assurance_number - 62);
  } else {
    five_weight = 7770 + 350 * (five_star_assurance_number - 73);
  }
  if (four_star_assurance_number < 8) {
    four_weight = 600;
  } else if (four_star_assurance_number == 8) {
    four_weight = 6600;
  } else {
    four_weight = 6600 + 3000 * (four_star_assurance_number - 8);
  }
  three_weight = 9330;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_pity_w[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (fate_weapon == 1 || fate_weapon == 2) {
        if (fate_points == 2) {
          type = 1;
          five_count_w++;
          kind = up_five_g[fate_weapon - 1];
          fate_points = 0;
          five_star_guarantee_number = false;
          ach_count[4]++;
          ach_count[5] = 0;
        } else if (five_star_guarantee_number || temp1 < 3) {
          type = 1;
          five_count_w++;
          kind = rspick(up_five_g, 2);
          if (kind == up_five_g[fate_weapon - 1]) {
            fate_points = 0;
            ach_count[4] = 0;
            if (!five_star_guarantee_number) {
              ach_count[5]++;
            }
          } else {
            fate_points++;
            ach_count[5] = 0;
          }
          five_star_guarantee_number = false;
        } else {
          type = 2;
          five_count_w++;
          kind = rspick(nup_five_w, 10);
          if (kind == up_five_g[fate_weapon - 1]) {
            fate_points = 0;
            ach_count[4] = 0;
            ach_count[5]++;
          } else {
            fate_points++;
            ach_count[5] = 0;
          }
          if ((kind == five_check[0] || kind == five_check[1])) {
            five_star_guarantee_number = false;
          } else {
            five_star_guarantee_number = true;
          }
        }
      } else if (fate_weapon == 0) {
        if (five_star_guarantee_number || temp1 < 3) {
          type = 1;
          five_count_w++;
          kind = rspick(up_five_g, 2);
          five_star_guarantee_number = false;
        } else {
          type = 2;
          five_count_w++;
          kind = rspick(nup_five_w, 10);
          if ((kind == five_check[0] || kind == five_check[1])) {
            five_star_guarantee_number = false;
          } else {
            five_star_guarantee_number = true;
          }
        }
      } else {
        error_code = 2;
        full_quit_e();
      }
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      if (four_star_guarantee_number || temp1 < 3) {
        type = 1;
        four_count_w++;
        unmet4_w = 0;
        kind = rspick(up_four_g, 5);
        four_star_guarantee_number = false;
      } else {
        if (unmet4_c < 15 && unmet4_w < 15) {
          const ptrdiff_t weight2[2] = {300, 300};
          resultu = WRSpick(weight2, 2);
          switch (resultu) {
            case 0: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        } else if (unmet4_c > 14) {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_c - 14), 300};
          resultu = WRSpick(weight2, 2);
          switch (resultu) {
            case 0: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        } else {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_w - 14), 300};
          resultu = WRSpick(weight2, 2);
          switch (resultu) {
            case 0: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              if ((kind == four_check[0] || kind == four_check[1] ||
                   kind == four_check[2] || kind == four_check[3] ||
                   kind == four_check[4])) {
                four_star_guarantee_number = false;
              } else {
                four_star_guarantee_number = true;
              }
            } break;
            case 1: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            default: {
              error_code = 4;
              full_quit_e();
            }
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void giwscli::core_f_4() {
  if (five_star_assurance_number < 74) {
    five_weight = 60;
  } else {
    five_weight = 60 + 600 * (five_star_assurance_number - 73);
  }
  if (four_star_assurance_number < 9) {
    four_weight = 510;
  } else {
    four_weight = 510 + 5100 * (four_star_assurance_number - 8);
  }
  three_weight = 9430;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_pity[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (unmet5_c < 147 && unmet5_w < 147) {
        const ptrdiff_t weight4[2] = {30, 30};
        resultu = WRSpick(weight4, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            five_count_c++;
            unmet5_c = 0;
            kind = rspick(nup_five_c, 5);
          } break;
          case 1: {
            type = 2;
            five_count_w++;
            unmet5_w = 0;
            kind = rspick(nup_five_w, 10);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      } else if (unmet5_c > 146) {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_c - 146), 30};
        resultu = WRSpick(weight4, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            five_count_c++;
            unmet5_c = 0;
            kind = rspick(nup_five_c, 5);
          } break;
          case 1: {
            type = 2;
            five_count_w++;
            unmet5_w = 0;
            kind = rspick(nup_five_w, 10);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      } else {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_w - 146), 30};
        resultu = WRSpick(weight4, 2);
        switch (resultu) {
          case 0: {
            type = 2;
            five_count_w++;
            unmet5_w = 0;
            kind = rspick(nup_five_w, 10);
          } break;
          case 1: {
            type = 1;
            five_count_c++;
            unmet5_c = 0;
            kind = rspick(nup_five_c, 5);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      }
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      if (unmet4_c < 17 && unmet4_w < 17) {
        const ptrdiff_t weight3[2] = {255, 255};
        resultu = WRSpick(weight3, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          case 1: {
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      } else if (unmet4_c > 16) {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_c - 16), 255};
        resultu = WRSpick(weight3, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          case 1: {
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      } else {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_w - 16), 255};
        resultu = WRSpick(weight3, 2);
        switch (resultu) {
          case 0: {
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
          } break;
          case 1: {
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          default: {
            error_code = 4;
            full_quit_e();
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void giwscli::core_f_5() {
  if (is_noelle && countx == 9) {
    star = 4;
    four_count++;
    four_star_assurance_number = 0;
    kind = 20;
    four_count_c++;
    is_noelle = false;
    if (ach_count[11] < 7) {
      if (kind_r_ach_11 != kind) {
        kind_r_ach_11 = kind;
        ach_count[11] = 0;
      } else {
        ach_count[11]++;
      }
    }
  } else if (four_star_assurance_number < 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
    } else if (temp1 < 57) {
      star = 4;
      four_count++;
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } else
      tri();
  } else if (four_star_assurance_number == 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
    } else if (temp1 < 567) {
      star = 4;
      four_count++;
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } else
      tri();
  } else {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
    } else {
      star = 4;
      four_count++;
      if (four_star_assurance_number > 11) {
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    }
  }
}

void giwscli::post_add() {
  countx++;
  five_star_assurance_number++;
  four_star_assurance_number++;
}

void giwscli::set_banner_f(ptrdiff_t chosen_banner_p,
                           ptrdiff_t chosen_event_p) {
  switch (chosen_banner_p) {
    case 1: {
      pool_stair_1(chosen_event_p);
      if (chosen_event_p == 8) {
        five_check[0] = 0;
      }
      if (chosen_event_p < 22) {
        switch_e_should_be = 0;
      } else {
        switch_e_sav = switch_e_should_be;
        switch_e_should_be = tempga4[chosen_event_p - 22];
      }
    } break;
    case 2: {
      pool_stair_2(chosen_event_p);
      switch_e_sav = switch_e_should_be;
      switch_e_should_be = tempgb4[chosen_event_p];
    } break;
    case 3: {
      pool_stair_3(chosen_event_p);
    } break;
    case 4: {
      pool_stair_4(chosen_event_p);
    } break;
    case 5: {
      ini_ams(nup_four_c, 11, nup_four_cg1);
    } break;
    default: {
      error_code = 7;
      full_quit_e();
    }
  }
}

void giwscli::gipull(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p) {
  const size_t tempt = static_cast<size_t>(generatorz());
  star = 0;  // 4-star or 5-star
  type = 0;  // Up or non-up, character or weapon
  kind = 0;  // which exactly
  giwscli::set_banner_f(chosen_banner_p, chosen_event_p);
  switch (chosen_banner_p) {
    case 1: {
      temp1 = tempt % 2;
      core_f_1();
    } break;
    case 2: {
      temp1 = tempt % 2;
      core_f_1();
    } break;
    case 3: {
      temp1 = tempt % 4;
      core_f_3();
    } break;
    case 4: {
      core_f_4();
    } break;
    case 5: {
      temp1 = tempt % 1000;
      core_f_5();
    } break;
    default: {
      error_code = 7;
      full_quit_e();
    }
  }
  post_add();
}
