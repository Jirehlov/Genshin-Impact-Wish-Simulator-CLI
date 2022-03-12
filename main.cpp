#include <iomanip>

#include "functions.h"

int main(int argc, char *argv[]) {
  static char default_argv0[] = "giwscli";
  argv[0] = default_argv0;
  // general settings for robustness

  y_print = true;
  y_luck = true;
  y_prog = false;
  y_track_luck = false;
  y_track_luck_mode = false;
  y_anim = false;
  y_anim_del = false;
  // bool pre-set

  // arg_proc:
  {
    int arg_proc_r = arg_proc(argc, argv);
    if (arg_proc_r == 1) {
      goto set_banner;  // direct mode with lang provided
    } else if (arg_proc_r == 2) {
      goto language_setting;  // with lang not provided
    } else {
      return error_code;
    }
  }

language_setting : {
  std::cout << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
  std::cin >> lang_status;
  slash_n() if (std::cin.fail() || lang_status > 1) {
    lang_status = 0;
    cin_error_by3() goto language_setting;
  }
  if (argc == 4) {
    goto set_banner;
  }
}
  // pre-settings for language

pre_announcement : {
  enter_chosen_banner_f();
  // welcome:
  lang_cout(1, 1);
  slash_n() lang_cout(1, 2);
  slash_n() lang_cout(1, 3);
  slash_n() lang_cout(1, 4);
  slash_nn()
}  // pre-announcement and ini of variables

enter_chosen_banner : {
  lang_cout(1, 5);
  slash_n() lang_cout(1, 6);
  slash_n() lang_cout(1, 7);
  slash_n() lang_cout(1, 108);
  slash_n() lang_cout(1, 8);
  slash_n() lang_cout(1, 9);
  slash_n() lang_cout(1, 10);
  slash_n() lang_cout(1, 161);
  slash_nn() std::cin >> chosen_banner;
  if (std::cin.fail()) {
    chosen_banner = 0;
    cin_error_by2() goto pre_announcement;
  }
}  // interface for banner chosing

enter_chosen_event : {
  e_sav = chosen_event;
  {
    int enter_chosen_event_f_r = enter_chosen_event_f();
    if (enter_chosen_event_f_r == 1) {
      goto enter_chosen_event;
    } else if (enter_chosen_event_f_r == 2) {
      goto enter_chosen_banner;
    } else if (enter_chosen_event_f_r == 3) {
      goto pre_announcement;
    } else if (enter_chosen_event_f_r == 0) {
      goto set_banner;
    } else {
      return error_code;
    }
  }
}  // which event? seriously, it's a pretty long list

set_banner : {
  set_banner_f();
  if (y_arg) {
    goto core_core_loop;
  }
  // set banner
  if (!is_cross) {
    goto switch_check;
  } else if (chosen_banner == 3) {
    min_fives = 80;
  } else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
    min_fives = 90;
  } else {
    min_fives = PTRDIFF_MAX;
  }
  // set min_fives since they vary
}

switch_check : {
  if ((switch_b_sav == chosen_banner && switch_e_sav == chosen_event) ||
      e_sav == chosen_event) {
    is_dualcross = true;
  } else {
    is_dualcross = false;
  }
  if (is_dualcross) {
    goto enter_wishes_number;
  } else {
    unmet4_c = 0;
    unmet4_w = 0;
    unmet5_c = 0;
    unmet5_w = 0;
  }
}
  // seriously, why mihoyo want dual banners

enter_wishes_number : {  // this is a pretty long symbol
  if (quit) {
    lang_cout(4, 6);
    slash_n() error_code = 6;
    full_quit_f()
  }  // quit detect

  {
    pre_wishes();
    std::cin >> wishes_number;
    if (std::cin.fail()) {
      wishes_number = 0;
      cin_error_by() goto enter_wishes_number;
    }
    slash_n()
  }
  // enter wishes number

  if (wishes_number == -1) {
    wishes_number = 0;
    goto enter_chosen_event;
  }  // -1 for father options

  else if (wishes_number == -2) {
    for (size_t templuck = 0; templuck < 10; templuck++) {
      if (luckiestkind[templuck] > MAX_ITEMS - 1) {
        lang_cout(1, 62);
        slash_n() goto enter_wishes_number;
      }
    }  // check if overpass the max item

    if (countx_l < 10) {
      lang_cout(1, 62);
      slash_n() goto enter_wishes_number;
    }  // avoid being at less than 10

    lang_cout(1, 63);
    std::cout << luckiest << '\n';
    for (size_t templuck = 0; templuck < 10; templuck++) {
      std::cout << luckiestlocation[templuck] << "("
                << luckiestsublocation[templuck] << ")("
                << luckiestsubsublocation[templuck] << ") ";
      casesx(luckiestkind[templuck]);
      lang_cout(2, luckiestkind[templuck]);
      slash_n()
    }  // real output

    wishes_number = 0;
    goto enter_wishes_number;
  }  // -2 for luckiness display

  else if (wishes_number == -3) {
  enter_cleanornot : {
    {
      lang_cout(1, 91);
      slash_n() lang_cout(1, 92);
      slash_n() lang_cout(1, 93);
      slash_nn()
    }  // interface

    static ptrdiff_t cleanornot = 0;
    std::cin >> cleanornot;
    {
      if (std::cin.fail()) {
        cleanornot = 0;
        cin_error_by2() goto enter_cleanornot;
      }
      slash_n()
    }  // get

    if (cleanornot == 1) {
      clean_f();
      goto enter_wishes_number;
    } else if (cleanornot == -1) {
      cleanornot = 0;
      wishes_number = 0;
      goto enter_wishes_number;
    } else {
      cleanornot = 0;
      wishes_number = 0;
      lang_cout(1, 72);
      slash_nn() goto enter_cleanornot;
    }
  }  // clean your bedroom everyday
  }

  else if (wishes_number == -4) {
    if (y_print) {
      y_print = false;
      lang_cout(1, 65);
      slash_n()
    } else {
      y_print = true;
      lang_cout(1, 66);
      slash_n()
    }  // black is white

    wishes_number = 0;
    goto enter_wishes_number;
  }

  else if (wishes_number == -5) {
    if (chosen_banner == 5 || four_count == 0 || five_count == 0) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() goto enter_wishes_number;
    }  // no novice

    else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
      lang_cout(1, 88);
      slash_nn() std::cout << std::fixed << std::setprecision(8);
      for (size_t iout = 0; iout < 10; iout++) {
        std::cout << iout + 1 << "  " << four_pity[iout] << "   "
                  << static_cast<double>(four_pity[iout]) * 100.0 /
                         static_cast<double>(four_count)
                  << "%\n";
      }
      std::cout << "10+  " << four_pity[10] << "   "
                << static_cast<double>(four_pity[10]) * 100.0 /
                       static_cast<double>(four_count)
                << "%\n\n";
      lang_cout(1, 89);
      slash_nn() for (size_t iout = 0; iout < 90; iout++) {
        std::cout << iout + 1 << "  " << five_pity[iout] << "   "
                  << static_cast<double>(five_pity[iout]) * 100.0 /
                         static_cast<double>(five_count)
                  << "%\n";
      }
      std::cout << std::defaultfloat;
      wishes_number = 0;
      goto enter_wishes_number;
    }  // for chars

    else if (chosen_banner == 3) {
      lang_cout(1, 88);
      slash_nn() std::cout << std::fixed << std::setprecision(8);
      for (size_t iout = 0; iout < 10; iout++) {
        std::cout << iout + 1 << "  " << four_pity[iout] << "   "
                  << static_cast<double>(four_pity[iout]) * 100.0 /
                         static_cast<double>(four_count)
                  << "%\n";
      }
      std::cout << "10+  " << four_pity[10] << "   "
                << static_cast<double>(four_pity[10]) * 100.0 /
                       static_cast<double>(four_count)
                << "%\n\n";
      lang_cout(1, 89);
      slash_nn() for (size_t iout = 0; iout < 80; iout++) {
        std::cout << iout + 1 << "  " << five_pity_w[iout] << "   "
                  << static_cast<double>(five_pity_w[iout]) * 100.0 /
                         static_cast<double>(five_count)
                  << "%\n";
      }
      std::cout << std::defaultfloat;
      wishes_number = 0;
      goto enter_wishes_number;
    }  // for weapons

    else {
      wishes_number = 0;
      lang_cout(4, 7);
      slash_n() error_code = 7;
      full_quit_f()
    }  // illegal
  }

  else if (wishes_number == -6) {
    if (chosen_banner == 3 && chosen_event > 14) {
    enter_fate_weapon:
      lang_cout(1, 67);
      slash_n() lang_cout(1, 68);
      slash_n() lang_cout(1, 69);
      std::cout << " ( ";
      lang_cout(2, up_five_g[0]);
      std::cout << " ) \n";
      lang_cout(1, 70);
      std::cout << " ( ";
      lang_cout(2, up_five_g[1]);
      std::cout << " ) \n";
      lang_cout(1, 71);
      slash_nn() std::cin >> fate_weapon;
      if (std::cin.fail()) {
        fate_weapon = 0;
        cin_error_by2() goto enter_fate_weapon;
      } else if (fate_weapon == -1) {
        fate_weapon = 0;
        goto enter_wishes_number;
      } else if (fate_weapon > 2) {
        slash_n() lang_cout(1, 72);
        slash_nn() fate_weapon = 0;
        goto enter_fate_weapon;
      } else {
        fate_points = 0;
      }
      wishes_number = 0;
      goto enter_wishes_number;
    }  // if available

    else {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() goto enter_wishes_number;
    }  // if not
  }

  else if (wishes_number == -7) {
    if (y_luck) {
      y_luck = false;
      lang_cout(1, 156);
      slash_n()
    } else {
      y_luck = true;
      lang_cout(1, 157);
      slash_n()
    }
    wishes_number = 0;
    goto enter_wishes_number;
  }  // luck switch

  else if (wishes_number == -8) {
    if (y_prog) {
      y_prog = false;
      lang_cout(1, 167);
      slash_n()
    } else {
      y_prog = true;
      lang_cout(1, 168);
      slash_n()
    }
    wishes_number = 0;
    goto enter_wishes_number;
  }  // prog switch

  else if (wishes_number == -9) {
    wishes_number = 0;
    signed int temptuck = 0;
    if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
      temptuck = static_cast<signed int>(luckiest / 7700);
    } else if (chosen_banner == 3) {
      temptuck = static_cast<signed int>(luckiest / 6845);
    } else if (chosen_banner == 5) {
      temptuck = static_cast<signed int>(luckiest / 16667);
    } else {
      lang_cout(4, 7);
      slash_n() error_code = 7;
      full_quit_f()
    }  // set threshold
  enter_tuck:
    lang_cout(1, 171);
    slash_n() lang_cout(1, 159);
    lang_cout(1, 172);
    slash_nn() lang_cout(1, 92);
    slash_nn() std::cin >> tuck;
    if (std::cin.fail()) {
      tuck = 0;
      cin_error_by2() goto enter_tuck;
    } else if (tuck == -1) {
      tuck = 0;
      goto enter_wishes_number;
    } else if (tuck > 10 || tuck < 1) {
      slash_n() lang_cout(1, 72);
      slash_nn() tuck = 0;
      goto enter_tuck;
    } else if (tuck <= temptuck) {
      slash_n() lang_cout(1, 173);
      slash_nn() tuck = 0;
      goto enter_tuck;
    } else {
      y_track_luck = true;
      y_track_luck_mode = true;
      y_luck = true;
      slash_n() head_print();
      goto core_core_loop;
    }
  }  // marathon settings

  else if (wishes_number == -10) {
    if (y_anim) {
      y_anim = false;
      lang_cout(1, 175);
      slash_n()
    } else {
      y_anim = true;
      lang_cout(1, 176);
      slash_n()
    }
    wishes_number = 0;
    goto enter_wishes_number;
  }  // anim switch

  else if (wishes_number == -11) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() goto enter_wishes_number;
    }
    hash_gen();
    wishes_number = 0;
    goto enter_wishes_number;
  }  // hash generator

  else if (wishes_number == -31) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() goto enter_wishes_number;
    }
    {
      int wishes_31_r = wishes_31();
      if (wishes_31_r == 1) {
        goto enter_wishes_number;
      } else {
        wishes_number = 0;
        goto enter_wishes_number;
      }
    }
  }  // manual settings

  else if (wishes_number == -63) {
    wishes_number = 0;
    is_s_mode = true;
    {
      int wishes_63_r = wishes_63();
      if (wishes_63_r == 1) {
        goto enter_wishes_number;
      } else {
        goto core_core_loop;
      }
    }
  }  // s_mode settings

  else if (wishes_number == -127) {
    wishes_number = 0;
    wishes_127();
    goto enter_wishes_number;
  }  // debugger

  else if (wishes_number == -120) {
  language_setting_local_6:
    std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
    std::cin >> lang_status;
    slash_n() if (std::cin.fail() || lang_status > 1) {
      lang_status = 0;
      cin_error_by3() goto language_setting_local_6;
    }
    else {
      wishes_number = 0;
      goto enter_wishes_number;
    }
  }  // language just-in-time

  else if (wishes_number == -270) {
    wishes_number = 0;
    if (!achp_check) {
      lang_cout(1, 163);
    } else {
      for (size_t i = 0; i < 12; i++) {
        if (ach_q[i]) {
          const size_t achdis = i + i + 3;
          const size_t achname = i + i + 4;
          lang_cout(6, achname);
          std::cout << " --- ";
          lang_cout(6, achdis);
          slash_n() achp_check_again = true;
        }
      }
      if (!achp_check_again) {
        lang_cout(1, 164);
      }
    }
    slash_n() goto enter_wishes_number;
  }  // what? achievements

  else if (wishes_number < 1) {
    wishes_number = 0;
    lang_cout(1, 72);
    slash_n() goto enter_wishes_number;
  } else {
    head_print();
  }  // invalid settings
}

core_core_loop : {
  pre_ccloop();
  starty = std::chrono::system_clock::now();
  // ikuzo

  if (chosen_banner == 1 || chosen_banner == 2) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      const size_t temp1 = generatorz() % 2;
      unsigned int star = 0;  // 4-star or 5-star
      unsigned int type = 0;  // Up or non-up, character or weapon
      size_t kind = 0;        // which exactly
      core_f_1(temp1, star, type, kind);
      output_string(kind);
      if (star != 4 || type == 3) {
        unmet4_c++;
      }
      if (star != 4 || type != 3) {
        unmet4_w++;
      }
      if (ach_count[0] > 7) {
        ach[0] = true;
      }
      if (ach_count[1] > 7) {
        ach[1] = true;
      }
      if (ach_count[8] > 6) {
        ach[8] = true;
      }
      if (ach_count[6] < 11) {
        ach_count[6]++;
        if (star == 5) {
          ach[6] = true;
        }
      }
      if (ach_count[11] > 6) {
        ach[11] = true;
      }
      if (!y_arg) {
        if (is_s_mode) {
          is_mode()
        } else {
          if (y_anim) {
            anim_lp()
          }
          if (!y_track_luck_mode) {
            prog_g()
          }
        }
        if (y_luck) {
          luckget(star, kind);
          if (star == 4 || star == 5) {
            for (const size_t templuck : luckstar) {
              if (templuck == 5) {
                luck += 7700;
              } else if (templuck == 4) {
                luck += 766;
              } else {
                luck += 0;
              }
            }
          }
          luckcpy();
          if (y_track_luck) {
            signed int temptuck = static_cast<signed int>(luckiest / 7700);
            if (temptuck >= tuck) {
              y_track_luck = false;
            }
          }
        }
      }
    }
  }
  // chars up

  else if (chosen_banner == 3) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      const size_t temp1 = generatorz() % 4;
      unsigned int star = 0;  // 4-star or 5-star
      unsigned int type = 0;  // Up or non-up, character or weapon
      size_t kind = 0;        // which exactly
      core_f_3(temp1, star, type, kind);
      output_string(kind);
      if (star != 4 || type == 3) {
        unmet4_c++;
      }
      if (star != 4 || type != 3) {
        unmet4_w++;
      }
      if (ach_count[4] > 6) {
        ach[4] = true;
      }
      if (ach_count[5] > 6) {
        ach[5] = true;
      }
      if (ach_count[8] > 6) {
        ach[8] = true;
      }
      if (ach_count[6] < 11) {
        ach_count[6]++;
        if (star == 5) {
          ach[6] = true;
        }
      }
      if (ach_count[11] > 6) {
        ach[11] = true;
      }
      if (!y_arg) {
        if (is_s_mode) {
          is_mode()
        } else {
          if (y_anim) {
            anim_lp()
          }
          if (!y_track_luck_mode) {
            prog_g()
          }
        }
        if (y_luck) {
          luckget(star, kind);
          if (star == 4 || star == 5) {
            for (const size_t templuck : luckstar) {
              if (templuck == 5) {
                luck += 6845;
              } else if (templuck == 4) {
                luck += 674;
              } else {
                luck += 0;
              }
            }
          }
          luckcpy();
          if (y_track_luck) {
            signed int temptuck = static_cast<signed int>(luckiest / 6845);
            if (temptuck >= tuck) {
              y_track_luck = false;
            }
          }
        }
      }
    }
  }
  // weapons up

  else if (chosen_banner == 4) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      unsigned int star = 0;  // 4-star or 5-star
      unsigned int type = 0;  // Up or non-up, character or weapon
      size_t kind = 0;        // which exactly
      core_f_4(star, type, kind);
      output_string(kind);
      if (!(star == 5 && type == 1)) {
        unmet5_c++;
      }
      if (!(star == 5 && type == 2)) {
        unmet5_w++;
      }
      if (!(star == 4 && type == 1)) {
        unmet4_c++;
      }
      if (!(star == 4 && type == 2)) {
        unmet4_w++;
      }
      if (ach_count[8] > 6) {
        ach[8] = true;
      }
      if (ach_count[6] < 11) {
        ach_count[6]++;
        if (star == 5) {
          ach[6] = true;
        }
      }
      if (ach_count[11] > 6) {
        ach[11] = true;
      }
      if (!y_arg) {
        if (is_s_mode) {
          is_mode()
        } else {
          if (y_anim) {
            anim_lp()
          }
          if (!y_track_luck_mode) {
            prog_g()
          }
        }
        if (y_luck) {
          luckget(star, kind);
          if (star == 4 || star == 5) {
            for (const size_t templuck : luckstar) {
              if (templuck == 5) {
                luck += 7700;
              } else if (templuck == 4) {
                luck += 766;
              } else {
                luck += 0;
              }
            }
          }
          luckcpy();
          if (y_track_luck) {
            signed int temptuck = static_cast<signed int>(luckiest / 7700);
            if (temptuck >= tuck) {
              y_track_luck = false;
            }
          }
        }
      }
    }
  }
  // no up

  else if (chosen_banner == 5) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      const size_t temp1 = generatorz() % 1000;
      unsigned int star = 0;  // 4-star or 5-star
      size_t kind = 0;        // which exactly
      core_f_5(temp1, star, kind);
      output_string(kind);
      if (ach_count[8] > 6) {
        ach[8] = true;
      }
      if (ach_count[6] < 11) {
        ach_count[6]++;
        if (star == 5) {
          ach[6] = true;
        }
      }
      if (ach_count[11] > 6) {
        ach[11] = true;
      }
      if (!y_arg) {
        if (is_s_mode) {
          is_mode()
        } else {
          if (y_anim) {
            anim_lp()
          }
          if (!y_track_luck_mode) {
            prog_g()
          }
        }
        if (y_luck) {
          luckget(star, kind);
          if (star == 4 || star == 5) {
            for (const size_t templuck : luckstar) {
              if (templuck == 5) {
                luck += 16667;
              } else if (templuck == 4) {
                luck += 766;
              } else {
                luck += 0;
              }
            }
          }
          luckcpy();
          if (y_track_luck) {
            signed int temptuck = static_cast<signed int>(luckiest / 16667);
            if (temptuck >= tuck) {
              y_track_luck = false;
            }
          }
        }
      }
    }
  }  // novice

  else {
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_f()
  }

  endy = std::chrono::system_clock::now();
  // real work

  if (y_anim) {
    animation_gen(star_max);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (anim_number == 10) {
      for (size_t templuck = 0; templuck < 10; templuck++) {
        std::cout << animlocation[templuck] << "(" << animsublocation[templuck]
                  << ")(" << animsubsublocation[templuck] << ") ";
        casesx(animkind[templuck]);
        lang_cout(2, animkind[templuck]);
        slash_n() lang_cout(7, animkind[templuck]);
        slash_n()
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
    } else if (anim_number == 1) {
      std::cout << anim_location << "(" << anim_sublocation << ")("
                << anim_subsublocation << ") ";
      casesx(anim_kind);
      lang_cout(2, anim_kind);
      slash_n() lang_cout(7, anim_kind);
      slash_n()
    } else {
      lang_cout(4, 16);
      slash_nn() error_code = 16;
      full_quit_f()
    }
  }
  // animation

  if (y_anim_del) {
    y_anim_del = false;
    y_anim = true;
  }
  // reset

  elapsed = endy - starty;
  elapsed_time =
      std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
  t_start = std::chrono::system_clock::to_time_t(starty);
  t_end = std::chrono::system_clock::to_time_t(endy);
  // time's up

  delay_r = 100;
  if (!y_arg && !y_print && y_prog && !is_s_mode && !y_track_luck_mode) {
    prog_p()
  }
  y_track_luck_mode = false;
  // prog post-output

  stat_out();
  wishes_number_r = 0;
  if (y_arg || error_code != 0) {
    hash_gen();
    full_quit_f()
  }
  goto enter_wishes_number;
}
}
