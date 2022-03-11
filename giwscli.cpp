#include "giwscli.h"

bool quit = true, is_noelle = true, five_star_guarantee_number = false,
     four_star_guarantee_number = false,
     ach[12] = {false, false, false, false, false, false,
                false, false, false, false, false, false};
size_t fate_points = 0, up_five = 0, size_nup_four_c = 1, countx = 0,
       five_count = 0, five_count_c = 0, five_count_w = 0, four_count = 0,
       four_count_c = 0, four_count_w = 0, max_fivesth = 1, min_fivesth = 1,
       max_fivecount = 1, min_fivecount = 1, size_nup_four_w = 18,
       kind_r_ach_11 = 0, kind_r_ach_8 = 0, up_five_g[2] = {0},
       up_four_g[16] = {0}, nup_four_c[32] = {0},
       five_check[8] = {127, 127, 127, 127, 127, 127, 127, 127},
       four_check[8] = {127, 127, 127, 127, 127, 127, 127, 127},
       pcount[128] = {0}, four_pity[11] = {0}, five_pity[90] = {0},
       five_pity_w[80] = {0};
size_t nup_five_c[5] = {0, 1, 2, 3, 4},
       nup_five_w[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
       nup_four_w[32] = {32, 33, 34, 35, 36, 37, 38, 39, 40,
                         41, 42, 43, 44, 45, 46, 47, 48, 49},
       three_g[13] = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62};
unsigned int resultt = 0, resultu = 0, lang_status = 0;
ptrdiff_t unmet4_c = 0, unmet4_w = 0, unmet5_c = 0, unmet5_w = 0,
          four_star_assurance_number = 1, five_star_assurance_number = 1,
          max_fives = 1, min_fives = PTRDIFF_MAX, five_weight = 0,
          four_weight = 0, three_weight = 0, fate_weapon = 0, ave_fives = 0,
          ach_count[12] = {0};
signed int error_code = 0, full_q = 0;

size_t rspick(const size_t *kindx, size_t sizekind) {
  size_t kindout = kindx[0];
  size_t index = 1;
  unsigned int temp121 = 0;
  for (; index < sizekind; ++index) {
    temp121 = static_cast<unsigned int>(
        generatorz() % (static_cast<unsigned long long int>(index) + 1));
    if (temp121 == 0) {
      kindout = kindx[index];
    }
  }
  return kindout;
}
// randomly pick an element among kindx which size is sizekind

unsigned int WRSpick(const ptrdiff_t *weightx, size_t nom) {
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

void full_quit_e [[noreturn]] () {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  full_q = std::cin.get();
  std::exit(error_code);
}

void tri(unsigned int &star, size_t &kind) {
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

void mpcheck() {
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

void core_f_1(const size_t &temp1, unsigned int &star, unsigned int &type,
              size_t &kind) {
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
      tri(star, kind);
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void core_f_3(const size_t &temp1, unsigned int &star, unsigned int &type,
              size_t &kind) {
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
      tri(star, kind);
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void core_f_4(unsigned int &star, unsigned int &type, size_t &kind) {
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
      tri(star, kind);
      break;
    default: {
      error_code = 3;
      full_quit_e();
    }
  }
}

void core_f_5(const size_t &temp1, unsigned int &star, size_t &kind) {
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
      tri(star, kind);
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
      tri(star, kind);
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
