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
size_t giwscli::up_four_g[16] = {0};
size_t giwscli::nup_four_c[32] = {0};
size_t giwscli::five_check[8] = {127, 127, 127, 127, 127, 127, 127, 127};
size_t giwscli::four_check[8] = {127, 127, 127, 127, 127, 127, 127, 127};
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

void giwscli::set_pool_1(size_t up_five_p, size_t size_nup_four_c_p,
                         const size_t *tempg1, const size_t *tempg5,
                         const size_t *nup_four_cgm) {
  up_five = up_five_p;
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempg1);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 8, tempg5);
}

void giwscli::set_pool_3(size_t size_nup_four_c_p, const size_t *tempg1,
                         const size_t *tempg5, const size_t *tempg6,
                         const size_t *tempg7, const size_t *nup_four_cgm) {
  ini_ams(up_five_g, 2, tempg6);
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 5, tempg1);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 8, tempg5);
  ini_ams(five_check, 8, tempg7);
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
          if ((kind == five_check[0] || kind == five_check[1] ||
               kind == five_check[2] || kind == five_check[3] ||
               kind == five_check[4] || kind == five_check[5] ||
               kind == five_check[6] || kind == five_check[7])) {
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
          if ((kind == five_check[0] || kind == five_check[1] ||
               kind == five_check[2] || kind == five_check[3] ||
               kind == five_check[4] || kind == five_check[5] ||
               kind == five_check[6] || kind == five_check[7])) {
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
                   kind == four_check[4] || kind == four_check[5] ||
                   kind == four_check[6] || kind == four_check[7])) {
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
      if (chosen_event_p < 22) {
        switch_e_should_be = 0;
      }
      switch (chosen_event_p) {
        case 1: {
          const size_t tempg1[3] = {22, 26, 30};
          const size_t tempg5[8] = {22, 26, 30, 0, 0, 0, 0, 0};
          set_pool_1_m(63, 11, nup_four_cg1)
        } break;
        case 2: {
          const size_t tempg1[3] = {17, 20, 24};
          const size_t tempg5[8] = {17, 20, 24, 0, 0, 0, 0, 0};
          set_pool_1_m(64, 11, nup_four_cg1)
        } break;
        case 3: {
          const size_t tempg1[3] = {18, 23, 25};
          const size_t tempg5[8] = {23, 25, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(65, 11, nup_four_cg1)
        } break;
        case 4: {
          const size_t tempg1[3] = {16, 19, 28};
          const size_t tempg5[8] = {19, 28, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(66, 11, nup_four_cg1)
        } break;
        case 5: {
          const size_t tempg1[3] = {17, 21, 22};
          const size_t tempg5[8] = {17, 21, 22, 0, 0, 0, 0, 0};
          set_pool_1_m(67, 13, nup_four_cg2)
        } break;
        case 6: {
          const size_t tempg1[3] = {22, 24, 26};
          const size_t tempg5[8] = {22, 24, 26, 0, 0, 0, 0, 0};
          set_pool_1_m(68, 13, nup_four_cg2)
        } break;
        case 7: {
          const size_t tempg1[3] = {16, 18, 25};
          const size_t tempg5[8] = {16, 18, 25, 0, 0, 0, 0, 0};
          set_pool_1_m(69, 13, nup_four_cg2)
        } break;
        case 8: {
          const size_t tempg1[3] = {21, 23, 30};
          const size_t tempg5[8] = {21, 23, 30, 0, 0, 0, 0, 0};
          set_pool_1_m(0, 13, nup_four_cg2) five_check[0] = 0;
        } break;
        case 9: {
          const size_t tempg1[3] = {19, 24, 26};
          const size_t tempg5[8] = {19, 24, 26, 0, 0, 0, 0, 0};
          set_pool_1_m(70, 13, nup_four_cg2)
        } break;
        case 10: {
          const size_t tempg1[3] = {17, 20, 28};
          const size_t tempg5[8] = {17, 20, 28, 0, 0, 0, 0, 0};
          set_pool_1_m(63, 13, nup_four_cg2)
        } break;
        case 11: {
          const size_t tempg1[3] = {15, 22, 30};
          const size_t tempg5[8] = {22, 30, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(65, 13, nup_four_cg2)
        } break;
        case 12: {
          const size_t tempg1[3] = {71, 20, 18};
          const size_t tempg5[8] = {18, 20, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(66, 14, nup_four_cg3)
        } break;
        case 13: {
          const size_t tempg1[3] = {16, 24, 25};
          const size_t tempg5[8] = {16, 24, 25, 0, 0, 0, 0, 0};
          set_pool_1_m(72, 14, nup_four_cg3)
        } break;
        case 14: {
          const size_t tempg1[3] = {17, 22, 30};
          const size_t tempg5[8] = {17, 22, 30, 0, 0, 0, 0, 0};
          set_pool_1_m(64, 15, nup_four_cg4)
        } break;
        case 15: {
          const size_t tempg1[3] = {15, 21, 28};
          const size_t tempg5[8] = {15, 21, 28, 0, 0, 0, 0, 0};
          set_pool_1_m(86, 15, nup_four_cg4)
        } break;
        case 16: {
          const size_t tempg1[3] = {71, 23, 19};
          const size_t tempg5[8] = {71, 23, 19, 0, 0, 0, 0, 0};
          set_pool_1_m(89, 15, nup_four_cg4)
        } break;
        case 17: {
          const size_t tempg1[3] = {91, 16, 18};
          const size_t tempg5[8] = {16, 18, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(90, 15, nup_four_cg4)
        } break;
        case 18: {
          const size_t tempg1[3] = {95, 17, 26};
          const size_t tempg5[8] = {17, 26, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(96, 16, nup_four_cg5)
        } break;
        case 19: {
          const size_t tempg1[3] = {15, 24, 25};
          const size_t tempg5[8] = {15, 24, 25, 0, 0, 0, 0, 0};
          set_pool_1_m(94, 16, nup_four_cg5)
        } break;
        case 20: {
          const size_t tempg1[3] = {23, 19, 71};
          const size_t tempg5[8] = {23, 19, 71, 0, 0, 0, 0, 0};
          set_pool_1_m(65, 17, nup_four_cg6)
        } break;
        case 21: {
          const size_t tempg1[3] = {100, 18, 91};
          const size_t tempg5[8] = {18, 91, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(70, 17, nup_four_cg6)
        } break;
        case 22: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 1;
          const size_t tempg1[3] = {15, 20, 21};
          const size_t tempg5[8] = {15, 20, 21, 0, 0, 0, 0, 0};
          set_pool_1_m(67, 18, nup_four_cg7)
        } break;
        case 23: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 0;
          const size_t tempg1[3] = {26, 30, 106};
          const size_t tempg5[8] = {26, 30, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(105, 18, nup_four_cg7)
        } break;
        case 24: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 2;
          const size_t tempg1[3] = {19, 23, 108};
          const size_t tempg5[8] = {19, 23, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(109, 19, nup_four_cg8)
        } break;
        case 25: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 3;
          const size_t tempg1[3] = {24, 25, 71};
          const size_t tempg5[8] = {24, 25, 71, 0, 0, 0, 0, 0};
          set_pool_1_m(66, 19, nup_four_cg8)
        } break;
        case 26: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 0;
          const size_t tempg1[3] = {18, 22, 100};
          const size_t tempg5[8] = {18, 22, 100, 0, 0, 0, 0, 0};
          set_pool_1_m(99, 20, nup_four_cg9)
        } break;
        case 27: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 4;
          const size_t tempg1[3] = {16, 21, 95};
          const size_t tempg5[8] = {16, 21, 95, 0, 0, 0, 0, 0};
          set_pool_1_m(96, 20, nup_four_cg9)
        } break;
        default: {
          error_code = 5;
          full_quit_e();
        }
      }
    } break;
    case 2: {
      switch (chosen_event_p) {
        case 1: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 22;
          const size_t tempg1[3] = {15, 20, 21};
          const size_t tempg5[8] = {15, 20, 21, 0, 0, 0, 0, 0};
          set_pool_1_m(72, 18, nup_four_cg7)
        } break;
        case 2: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 24;
          const size_t tempg1[3] = {19, 23, 108};
          const size_t tempg5[8] = {19, 23, 0, 0, 0, 0, 0, 0};
          set_pool_1_m(69, 19, nup_four_cg8)
        } break;
        case 3: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 25;
          const size_t tempg1[3] = {24, 25, 71};
          const size_t tempg5[8] = {24, 25, 71, 0, 0, 0, 0, 0};
          set_pool_1_m(68, 19, nup_four_cg8)
        } break;
        case 4: {
          switch_e_sav = switch_e_should_be;
          switch_e_should_be = 27;
          const size_t tempg1[3] = {16, 21, 95};
          const size_t tempg5[8] = {16, 21, 95, 0, 0, 0, 0, 0};
          set_pool_1_m(94, 20, nup_four_cg9)
        } break;
        default: {
          full_quit_e();
        }
      }
    } break;
    case 3: {
      switch (chosen_event_p) {
        case 1: {
          const size_t tempg6[2] = {5, 14};
          const size_t tempg1[5] = {34, 38, 40, 44, 48};
          const size_t tempg5[8] = {34, 38, 40, 44, 48, 0, 0, 0};
          const size_t tempg7[8] = {5, 14, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(11, nup_four_cg1)
        } break;
        case 2: {
          const size_t tempg6[2] = {7, 11};
          const size_t tempg1[5] = {33, 37, 41, 43, 49};
          const size_t tempg5[8] = {33, 37, 41, 43, 49, 0, 0, 0};
          const size_t tempg7[8] = {7, 11, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(11, nup_four_cg1)
        } break;
        case 3: {
          const size_t tempg6[2] = {6, 73};
          const size_t tempg1[5] = {32, 36, 40, 42, 48};
          const size_t tempg5[8] = {32, 36, 40, 42, 48, 0, 0, 0};
          const size_t tempg7[8] = {6, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(11, nup_four_cg1)
        } break;
        case 4: {
          const size_t tempg6[2] = {74, 75};
          const size_t tempg1[5] = {35, 39, 41, 44, 46};
          const size_t tempg5[8] = {35, 39, 41, 44, 46, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(11, nup_four_cg1)
        } break;
        case 5: {
          const size_t tempg6[2] = {8, 76};
          const size_t tempg1[5] = {34, 37, 40, 45, 49};
          const size_t tempg5[8] = {34, 37, 40, 45, 49, 0, 0, 0};
          const size_t tempg7[8] = {8, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 6: {
          const size_t tempg6[2] = {5, 12};
          const size_t tempg1[5] = {35, 36, 41, 44, 47};
          const size_t tempg5[8] = {35, 36, 41, 44, 47, 0, 0, 0};
          const size_t tempg7[8] = {5, 12, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 7: {
          const size_t tempg6[2] = {9, 77};
          const size_t tempg1[5] = {32, 36, 40, 43, 48};
          const size_t tempg5[8] = {32, 36, 40, 43, 48, 0, 0, 0};
          const size_t tempg7[8] = {9, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 8: {
          const size_t tempg6[2] = {11, 78};
          const size_t tempg1[5] = {33, 38, 46, 79, 80};
          const size_t tempg5[8] = {33, 38, 46, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {11, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 9: {
          const size_t tempg6[2] = {13, 81};
          const size_t tempg1[5] = {35, 41, 45, 82, 83};
          const size_t tempg5[8] = {35, 41, 45, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {13, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 10: {
          const size_t tempg6[2] = {6, 7};
          const size_t tempg1[5] = {39, 40, 43, 49, 84};
          const size_t tempg5[8] = {39, 40, 43, 49, 0, 0, 0, 0};
          const size_t tempg7[8] = {6, 7, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(13, nup_four_cg2)
        } break;
        case 11: {
          const size_t tempg6[2] = {73, 76};
          const size_t tempg1[5] = {33, 36, 48, 79, 80};
          const size_t tempg5[8] = {33, 36, 48, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(14, nup_four_cg3)
        } break;
        case 12: {
          const size_t tempg6[2] = {14, 85};
          const size_t tempg1[5] = {32, 37, 41, 42, 47};
          const size_t tempg5[8] = {32, 37, 41, 42, 47, 0, 0, 0};
          const size_t tempg7[8] = {14, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(14, nup_four_cg3)
        } break;
        case 13: {
          const size_t tempg6[2] = {7, 12};
          const size_t tempg1[5] = {88, 46, 44, 40, 38};
          const size_t tempg5[8] = {46, 44, 40, 38, 0, 0, 0, 0};
          const size_t tempg7[8] = {7, 12, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(15, nup_four_cg4)
        } break;
        case 14: {
          const size_t tempg6[2] = {87, 8};
          const size_t tempg1[5] = {82, 83, 84, 45, 41};
          const size_t tempg5[8] = {45, 41, 0, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {8, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(15, nup_four_cg4)
        } break;
        case 15: {
          const size_t tempg6[2] = {92, 10};
          const size_t tempg1[5] = {34, 39, 40, 43, 49};
          const size_t tempg5[8] = {34, 39, 40, 43, 49, 0, 0, 0};
          const size_t tempg7[8] = {10, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(15, nup_four_cg4)
        } break;
        case 16: {
          const size_t tempg6[2] = {93, 13};
          const size_t tempg1[5] = {35, 37, 41, 42, 47};
          const size_t tempg5[8] = {35, 37, 41, 42, 47, 0, 0, 0};
          const size_t tempg7[8] = {13, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(15, nup_four_cg4)
        } break;
        case 17: {
          const size_t tempg6[2] = {97, 75};
          const size_t tempg1[5] = {33, 38, 40, 44, 46};
          const size_t tempg5[8] = {33, 38, 40, 44, 46, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(16, nup_four_cg5)
        } break;
        case 18: {
          const size_t tempg6[2] = {98, 77};
          const size_t tempg1[5] = {34, 39, 41, 45, 48};
          const size_t tempg5[8] = {34, 39, 41, 45, 48, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(16, nup_four_cg5)
        } break;
        case 19: {
          const size_t tempg6[2] = {101, 73};
          const size_t tempg1[5] = {32, 36, 40, 49, 104};
          const size_t tempg5[8] = {32, 36, 40, 49, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(17, nup_four_cg6)
        } break;
        case 20: {
          const size_t tempg6[2] = {78, 81};
          const size_t tempg1[5] = {38, 42, 47, 102, 103};
          const size_t tempg5[8] = {38, 42, 47, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(17, nup_four_cg6)
        } break;
        case 21: {
          const size_t tempg6[2] = {85, 87};
          const size_t tempg1[5] = {41, 43, 46, 83, 84};
          const size_t tempg5[8] = {41, 43, 46, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(18, nup_four_cg7)
        } break;
        case 22: {
          const size_t tempg6[2] = {107, 6};
          const size_t tempg1[5] = {37, 40, 44, 82, 88};
          const size_t tempg5[8] = {37, 40, 44, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {6, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(18, nup_four_cg7)
        } break;
        case 23: {
          const size_t tempg6[2] = {110, 9};
          const size_t tempg1[5] = {35, 38, 45, 48, 80};
          const size_t tempg5[8] = {35, 38, 45, 48, 0, 0, 0, 0};
          const size_t tempg7[8] = {9, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(19, nup_four_cg8)
        } break;
        case 24: {
          const size_t tempg6[2] = {74, 5};
          const size_t tempg1[5] = {33, 39, 41, 49, 79};
          const size_t tempg5[8] = {33, 39, 41, 49, 0, 0, 0, 0};
          const size_t tempg7[8] = {5, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(19, nup_four_cg8)
        } break;
        case 25: {
          const size_t tempg6[2] = {112, 77};
          const size_t tempg1[5] = {34, 36, 42, 47, 103};
          const size_t tempg5[8] = {34, 36, 42, 47, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(20, nup_four_cg9)
        } break;
        case 26: {
          const size_t tempg6[2] = {97, 98};
          const size_t tempg1[5] = {37, 40, 46, 102, 104};
          const size_t tempg5[8] = {37, 40, 46, 0, 0, 0, 0, 0};
          const size_t tempg7[8] = {0, 0, 0, 0, 0, 0, 0, 0};
          set_pool_3_m(20, nup_four_cg9)
        } break;
        default: {
          full_quit_e();
        }
      }
    } break;
    case 4: {
      switch (chosen_event_p) {
        case 1: {
          const size_t nup_four_cg31[14] = {17, 19, 20, 21, 22, 23, 24,
                                            25, 26, 27, 28, 29, 30, 31};
          size_nup_four_c = 14;
          for (size_t i = 0; i < 14; i++) {
            nup_four_c[i] = nup_four_cg31[i];
          }
        } break;
        case 2: {
          const size_t nup_four_cg32[16] = {16, 17, 18, 19, 20, 21, 22, 23,
                                            24, 25, 26, 27, 28, 29, 30, 31};
          size_nup_four_c = 16;
          for (size_t i = 0; i < 16; i++) {
            nup_four_c[i] = nup_four_cg32[i];
          }
        } break;
        case 3: {
          const size_t nup_four_cg33[17] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                            24, 25, 26, 27, 28, 29, 30, 31};
          size_nup_four_c = 17;
          for (size_t i = 0; i < 17; i++) {
            nup_four_c[i] = nup_four_cg33[i];
          }
        } break;
        case 4: {
          const size_t nup_four_cg34[18] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                            24, 25, 26, 27, 28, 29, 30, 31, 71};
          size_nup_four_c = 18;
          for (size_t i = 0; i < 18; i++) {
            nup_four_c[i] = nup_four_cg34[i];
          }
        } break;
        case 5: {
          const size_t nup_four_cg35[19] = {15, 16, 17, 18, 19, 20, 21,
                                            22, 23, 24, 25, 26, 27, 28,
                                            29, 30, 31, 71, 91};
          size_nup_four_c = 19;
          for (size_t i = 0; i < 19; i++) {
            nup_four_c[i] = nup_four_cg35[i];
          }
        } break;
        case 6: {
          const size_t nup_four_cg36[20] = {15, 16, 17, 18, 19, 20, 21,
                                            22, 23, 24, 25, 26, 27, 28,
                                            29, 30, 31, 71, 91, 95};
          size_nup_four_c = 20;
          for (size_t i = 0; i < 20; i++) {
            nup_four_c[i] = nup_four_cg36[i];
          }
        } break;
        case 7: {
          const size_t nup_four_cg37[21] = {15, 16, 17, 18, 19, 20, 21,
                                            22, 23, 24, 25, 26, 27, 28,
                                            29, 30, 31, 71, 91, 95, 100};
          size_nup_four_c = 21;
          for (size_t i = 0; i < 21; i++) {
            nup_four_c[i] = nup_four_cg37[i];
          }
        } break;
        case 8: {
          const size_t nup_four_cg38[22] = {15, 16, 17, 18, 19,  20, 21, 22,
                                            23, 24, 25, 26, 27,  28, 29, 30,
                                            31, 71, 91, 95, 100, 106};
          size_nup_four_c = 22;
          for (size_t i = 0; i < 22; i++) {
            nup_four_c[i] = nup_four_cg38[i];
          }
        } break;
        case 9: {
          const size_t nup_four_cg39[23] = {15, 16, 17, 18, 19,  20,  21, 22,
                                            23, 24, 25, 26, 27,  28,  29, 30,
                                            31, 71, 91, 95, 100, 106, 108};
          size_nup_four_c = 22;
          for (size_t i = 0; i < 23; i++) {
            nup_four_c[i] = nup_four_cg39[i];
          }
        } break;
        default: {
          full_quit_e();
        }
      }
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
