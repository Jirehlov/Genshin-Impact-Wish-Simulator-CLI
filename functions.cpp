#include "functions.h"

#include <climits>

using namespace giwscli;

void casesx(const size_t& kind_p) {
  if (kind_p < 15) {
    std::cout << "!!!!!***** ";
  } else if (kind_p < 50) {
    std::cout << "!!**** ";
  } else if (kind_p < 63) {
    std::cout << "*** ";
  } else if (kind_p == 71 || kind_p == 79 || kind_p == 80 || kind_p == 82 ||
             kind_p == 83 || kind_p == 84 || kind_p == 88 || kind_p == 91 ||
             kind_p == 95 || kind_p == 100 || kind_p == 102 || kind_p == 103 ||
             kind_p == 104 || kind_p == 106 || kind_p == 108) {
    std::cout << "!!**** ";
  } else if (kind_p < MAX_ITEMS) {
    std::cout << "!!!!!***** ";
  } else {
    lang_cout(4, 1);
    std::cout << "  ";
    error_code = 1;
  }
}  // cout stars prefix

void ini_all(size_t* in, size_t ins, size_t nu) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = nu;
  }
}

void head_print() {
  lang_cout(1, 85);
  slash_n() if (!y_print) {
    if (!y_luck) {
      lang_cout(1, 159);
      lang_cout(1, 156);
      slash_n()
    } else {
      lang_cout(1, 159);
      lang_cout(1, 157);
      slash_n()
    }
    if (!y_prog) {
      lang_cout(1, 159);
      lang_cout(1, 167);
      slash_n()
    } else {
      lang_cout(1, 159);
      lang_cout(1, 168);
      slash_n()
    }
  }
  slash_n()
}

void animation_gen(const unsigned int star_p) {
  if (anim_number == 10) {
    if (star_p == 4) {
      for (size_t i = 0; i < 27; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 8; i++) {
        std::cout << "(*)";
        std::this_thread::sleep_for(std::chrono::milliseconds(160));
      }
    } else if (star_p == 5) {
      for (size_t i = 0; i < 26; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 4; i++) {
        std::cout << "(*)";
        std::this_thread::sleep_for(std::chrono::milliseconds(160));
      }
      for (size_t i = 0; i < 5; i++) {
        std::cout << "((***))";
        std::this_thread::sleep_for(std::chrono::milliseconds(320));
      }
    } else {
      lang_cout(4, 15);
      std::cout << "  ";
      error_code = 15;
    }
  } else if (anim_number == 1) {
    if (star_p == 3) {
      for (size_t i = 0; i < 20; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 15; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
    } else if (star_p == 4) {
      for (size_t i = 0; i < 12; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 15; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 8; i++) {
        std::cout << "(*)";
        std::this_thread::sleep_for(std::chrono::milliseconds(160));
      }
    } else if (star_p == 5) {
      for (size_t i = 0; i < 12; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 14; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 4; i++) {
        std::cout << "(*)";
        std::this_thread::sleep_for(std::chrono::milliseconds(160));
      }
      for (size_t i = 0; i < 5; i++) {
        std::cout << "((***))";
        std::this_thread::sleep_for(std::chrono::milliseconds(320));
      }
    } else {
      lang_cout(4, 15);
      std::cout << "  ";
      error_code = 15;
    }
  } else {
    lang_cout(4, 16);
    std::cout << "  ";
    error_code = 16;
  }
  slash_n()
}

void hash_p() {
  lang_cout(1, 180);
  slash_n() std::cout << "\n&" << hash_out[0];
  for (size_t i = 1; i < 9; i++) {
    std::cout << "*" << hash_out[i];
  }
  std::cout << "&\n\n";
}

void enter_chosen_banner_f() {
  fnhash() d_item_c = true;
  is_s_mode = false;
  quit = true;
  is_noelle = true;
  is_cross = false;
  is_dualcross = false;
  five_star_guarantee_number = false;
  four_star_guarantee_number = false;
  chosen_banner = 0;
  chosen_event = 0;
  four_star_assurance_number = 1;
  five_star_assurance_number = 1;
  max_fives = 1;
  min_fives = PTRDIFF_MAX;
  fate_weapon = 0;
  fate_points = 0;
  five_weight = 0;
  four_weight = 0;
  three_weight = 0;
  unmet4_c = 0;
  unmet4_w = 0;
  unmet5_c = 0;
  unmet5_w = 0;
  tuck = 0;
  anim_number = 0;
  star_max = 0;
  anim_kind = MAX_ITEMS;
  anim_location = 0;
  anim_sublocation = 0;
  anim_subsublocation = 0;
  resultt = 0;
  resultu = 0;
  switch_b_should_be = 0;
  switch_e_should_be = 0;
  switch_b_sav = 0;
  switch_e_sav = 0;
  luck = 0;
  luckiest = 0;
  e_sav = 0;
  size_nup_four_w = 18;
  countx = 0;
  countx_r = 0;
  countx_l = 0;
  wishes_number = 0;
  five_count = 0;
  five_count_c = 0;
  five_count_w = 0;
  four_count = 0;
  four_count_c = 0;
  four_count_w = 0;
  ave_fives = 0;
  max_fivesth = 1;
  min_fivesth = 1;
  max_fivecount = 1;
  min_fivecount = 1;
  kind_r_ach_8 = 0;
  wishes_number_r_t = 0;
  delay_prog = 0;
  delay_r = 0;
  ini_all(d_item, MAX_ITEMS + 1, 0);
  ini_all(d_item_n, MAX_ITEMS + 1, 0);
  ini_all(up_five_g, 2, 0);
  ini_all(up_four_g, 5, 0);
  ini_all(nup_four_c, 32, 0);
  ini_all(luckkind, 10, MAX_ITEMS);
  for (size_t i = 0; i < 10; i++) {
    luckstar[i] = 3;
  }
  ini_all(luckiestkind, 10, MAX_ITEMS);
  ini_all(animkind, 10, MAX_ITEMS);
  ini_all(five_check, 2, MAX_ITEMS);
  ini_all(four_check, 5, MAX_ITEMS);
  ini_all(pcount, 128, 0);
  ini_all(four_pity, 11, 0);
  ini_all(five_pity, 90, 0);
  ini_all(five_pity_w, 80, 0);
  ini_ams(lucklocation, 10, one_to_ten);
  ini_ams(lucksublocation, 10, one_to_ten);
  ini_ams(lucksubsublocation, 10, one_to_ten);
  ini_ams(luckiestlocation, 10, one_to_ten);
  ini_ams(luckiestsublocation, 10, one_to_ten);
  ini_ams(luckiestsubsublocation, 10, one_to_ten);
  ini_ams(animlocation, 10, one_to_ten);
  ini_ams(animsublocation, 10, one_to_ten);
  ini_ams(animsubsublocation, 10, one_to_ten);
  for (size_t i = 0; i < 12; i++) {
    ach_count[i] = 0;
  }
}

void output_string() {
  if (y_print && !y_anim) {
    std::cout << countx + 1 << "(" << five_star_assurance_number << ")("
              << four_star_assurance_number << ") ";
    casesx(kind);
    lang_cout(2, kind);
    slash_n()
  }
  pcount[kind]++;
  if (!is_s_mode) {
    wishes_number--;
  }
}  // cout what have come home

void wishes_127() {
  lang_cout(5, 0);
  std::cout << "seed = " << seed << '\n';
  lang_cout(5, 1);
  std::cout << "chosen_banner = " << chosen_banner << '\n';
  lang_cout(5, 2);
  std::cout << "chosen_event = " << chosen_event << '\n';
  lang_cout(5, 3);
  std::cout << "up_five = " << up_five << '\n';
  lang_cout(5, 4);
  std::cout << "y_print = " << y_print << '\n';
  lang_cout(5, 42);
  std::cout << "y_luck = " << y_luck << '\n';
  lang_cout(5, 5);
  std::cout << "four_star_assurance_number = " << four_star_assurance_number
            << '\n';
  lang_cout(5, 6);
  std::cout << "five_star_assurance_number = " << five_star_assurance_number
            << '\n';
  lang_cout(5, 7);
  std::cout << "four_star_guarantee_number = " << four_star_guarantee_number
            << '\n';
  lang_cout(5, 8);
  std::cout << "five_star_guarantee_number = " << five_star_guarantee_number
            << '\n';
  lang_cout(5, 9);
  std::cout << "countx = " << countx << '\n';
  lang_cout(5, 10);
  std::cout << "five_count = " << five_count << '\n';
  lang_cout(5, 11);
  std::cout << "five_count_c = " << five_count_c << '\n';
  lang_cout(5, 12);
  std::cout << "five_count_w = " << five_count_w << '\n';
  lang_cout(5, 13);
  std::cout << "four_count = " << four_count << '\n';
  lang_cout(5, 14);
  std::cout << "four_count_c = " << four_count_c << '\n';
  lang_cout(5, 15);
  std::cout << "four_count_w = " << four_count_w << '\n';
  lang_cout(5, 16);
  std::cout << "is_noelle = " << is_noelle << '\n';
  lang_cout(5, 17);
  std::cout << "ave_fives = " << ave_fives << '\n';
  lang_cout(5, 18);
  std::cout << "max_fives = " << max_fives << '\n';
  lang_cout(5, 19);
  std::cout << "min_fives = " << min_fives << '\n';
  lang_cout(5, 20);
  std::cout << "max_fivesth = " << max_fivesth << '\n';
  lang_cout(5, 21);
  std::cout << "min_fivesth = " << min_fivesth << '\n';
  lang_cout(5, 22);
  std::cout << "max_fivecount = " << max_fivecount << '\n';
  lang_cout(5, 23);
  std::cout << "min_fivecount = " << min_fivecount << '\n';
  lang_cout(5, 24);
  std::cout << "unmet4_c = " << unmet4_c << '\n';
  lang_cout(5, 25);
  std::cout << "unmet4_w = " << unmet4_w << '\n';
  lang_cout(5, 26);
  std::cout << "unmet5_c = " << unmet5_c << '\n';
  lang_cout(5, 27);
  std::cout << "unmet5_w = " << unmet5_w << '\n';
  lang_cout(5, 28);
  std::cout << "five_weight = " << five_weight << '\n';
  lang_cout(5, 29);
  std::cout << "four_weight = " << four_weight << '\n';
  lang_cout(5, 30);
  std::cout << "three_weight = " << three_weight << '\n';
  lang_cout(5, 31);
  std::cout << "size_nup_four_c = " << size_nup_four_c << '\n';
  lang_cout(5, 32);
  std::cout << "size_nup_four_w = " << size_nup_four_w << '\n';
  lang_cout(5, 33);
  std::cout << "is_cross = " << is_cross << '\n';
  lang_cout(5, 34);
  std::cout << "is_dualcross = " << is_dualcross << '\n';
  lang_cout(5, 35);
  std::cout << "switch_b_should_be = " << switch_b_should_be << '\n';
  lang_cout(5, 36);
  std::cout << "switch_e_should_be = " << switch_e_should_be << '\n';
  lang_cout(5, 37);
  std::cout << "fate_weapon = " << fate_weapon << '\n';
  lang_cout(5, 38);
  std::cout << "fate_points = " << fate_points << '\n';
  lang_cout(5, 39);
  std::cout << "luckiest = " << luckiest << '\n';
  lang_cout(5, 40);
  std::cout << "d_item_c = " << d_item_c << '\n';
  lang_cout(5, 41);
  std::cout << "is_s_mode = " << is_s_mode << '\n';
  lang_cout(5, 43);
  std::cout << "countx_l = " << countx_l << '\n';
  lang_cout(5, 44);
  std::cout << "ach_cout[] = ";
  for (size_t i = 0; i < 12; i++) {
    std::cout << ach_count[i] << " ";
  }
  slash_n() lang_cout(5, 45);
  std::cout << "ach[] = ";
  for (size_t i = 0; i < 12; i++) {
    std::cout << ach[i] << " ";
  }
  slash_n() lang_cout(5, 46);
  std::cout << "ach_q[] = ";
  for (size_t i = 0; i < 12; i++) {
    std::cout << ach_q[i] << " ";
  }
  slash_n() lang_cout(5, 47);
  std::cout << "kind_r_ach_8 = " << kind_r_ach_8 << '\n';
  lang_cout(5, 48);
  std::cout << "kind_r_ach_11 = " << kind_r_ach_11 << "\n\n";
}

void clean_f() {
  clear_all();
  fnhash() wishes_number = 0;
  countx_r = 0;
  luck = 0;
  for (size_t ini = 0; ini < 10; ini++) {
    lucklocation[ini] = ini + 1;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    lucksublocation[ini] = ini + 1;
  }
  for (size_t& ini : luckkind) {
    ini = 127;
  }
  for (unsigned int& ini : luckstar) {
    ini = 3;
  }
  luckiest = 0;
  for (size_t ini = 0; ini < 10; ini++) {
    luckiestlocation[ini] = ini + 1;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    luckiestsublocation[ini] = ini + 1;
  }
  for (size_t& ini : luckiestkind) {
    ini = 127;
  }
  for (size_t ini = 0; ini < 127; ini++) {
    d_item[ini] = 0;
  }
  for (size_t ini = 0; ini < 127; ini++) {
    d_item_n[ini] = 0;
  }
  for (size_t ini = 0; ini < 12; ini++) {
    ach_q[ini] = false;
  }
  countx_l = 0;
  achp_check_again = false;
  d_item_c = true;
  is_s_mode = false;
  y_track_luck = false;
  y_track_luck_mode = false;
  lang_cout(1, 64);
  slash_n()
}

int arg_proc(int argc, char* argv[]) {
  if (argc == 6) {
    int test0;
    int test1;
    signed long long int test2;
    unsigned long int test3;
    int test4;
    try {
      test0 = std::stoi(argv[1]);
      test1 = std::stoi(argv[2]);
      test2 = std::stoll(argv[3]);
      test3 = std::stoul(argv[4]);
      test4 = std::stoi(argv[5]);
    } catch (...) {
      lang_cout(4, 11);
      slash_n() error_code = 11;
      y_arg = true;
      full_quit_f()
    }
    drump5 = static_cast<size_t>(test0) ==
             static_cast<size_t>(test1) + static_cast<size_t>(test2) ==
             static_cast<size_t>(test3) + static_cast<size_t>(test4);
    test0 = std::stoi(argv[1]);
    test1 = std::stoi(argv[2]);
    test2 = std::stoll(argv[3]);
    test3 = std::stoul(argv[4]);
    test4 = std::stoi(argv[5]);
    chosen_banner = static_cast<ptrdiff_t>(test0);
    chosen_event = static_cast<ptrdiff_t>(test1);
    if (test2 < 1) {
      lang_cout(1, 72);
      slash_n() y_arg = true;
      full_quit_f()
    }
    { wishes_number = test2; }  // else
    if (test3 != 0 && test3 != 1) {
      lang_cout(4, 12);
      slash_n() error_code = 12;
      y_arg = true;
      full_quit_f()
    }
    { lang_status = static_cast<unsigned int>(test3); }  // else
    if (test4 != 0 && test4 != 1) {
      lang_cout(4, 11);
      slash_n() error_code = 453;
      y_arg = true;
      full_quit_f()
    }
    { y_savtof = static_cast<bool>(test4); }  // else
    quit = false;
    y_arg = true;
    return 1;
  }
  if (argc == 5) {
    int test0;
    int test1;
    signed long long int test2;
    unsigned long int test3;
    try {
      test0 = std::stoi(argv[1]);
      test1 = std::stoi(argv[2]);
      test2 = std::stoll(argv[3]);
      test3 = std::stoul(argv[4]);
    } catch (...) {
      lang_cout(4, 11);
      slash_n() error_code = 11;
      y_arg = true;
      full_quit_f()
    }
    drump5 = static_cast<size_t>(test0) ==
             static_cast<size_t>(test1) + static_cast<size_t>(test2) ==
             static_cast<size_t>(test3);
    test0 = std::stoi(argv[1]);
    test1 = std::stoi(argv[2]);
    test2 = std::stoll(argv[3]);
    test3 = std::stoul(argv[4]);
    chosen_banner = static_cast<ptrdiff_t>(test0);
    chosen_event = static_cast<ptrdiff_t>(test1);
    if (test2 < 1) {
      lang_cout(1, 72);
      slash_n() y_arg = true;
      full_quit_f()
    }
    { wishes_number = test2; }  // else
    if (test3 != 0 && test3 != 1) {
      lang_cout(4, 12);
      slash_n() error_code = 12;
      y_arg = true;
      full_quit_f()
    }
    { lang_status = static_cast<unsigned int>(test3); }  // else
    quit = false;
    y_arg = true;
    return 1;
  }
  if (argc == 4) {
    int test0;
    int test1;
    signed long long int test2;
    try {
      test0 = std::stoi(argv[1]);
      test1 = std::stoi(argv[2]);
      test2 = std::stoll(argv[3]);
    } catch (...) {
      lang_cout(4, 11);
      slash_n() error_code = 11;
      y_arg = true;
      full_quit_f()
    }
    drump4 = static_cast<size_t>(test0) + static_cast<size_t>(test1) ==
             static_cast<size_t>(test2);
    test0 = std::stoi(argv[1]);
    test1 = std::stoi(argv[2]);
    test2 = std::stoll(argv[3]);
    chosen_banner = static_cast<ptrdiff_t>(test0);
    chosen_event = static_cast<ptrdiff_t>(test1);
    if (test2 < 1) {
      lang_cout(1, 72);
      slash_n() y_arg = true;
      full_quit_f()
    }
    { wishes_number = test2; }  // else
    quit = false;
    y_arg = true;
    return 2;
  }
  if (argc == 1) {
    return 2;
  }
  {
    lang_cout(4, 11);
    slash_n() error_code = 11;
    y_arg = true;
    full_quit_f()
  }  // else
}

int enter_chosen_event_f() {
  switch (chosen_banner) {
    case -1:
      error_code = 100;
      full_quit_f()  // to diminish conflicts
          case 1 : {
        chosen_event = 0;
        static const size_t banner_1[47] = {
            12,  13,  109, 161, 192, 14,  15,  193, 16,  17,  194, 18,
            19,  195, 20,  21,  22,  196, 23,  24,  197, 25,  26,  198,
            27,  28,  199, 29,  30,  200, 94,  95,  201, 100, 101, 202,
            102, 103, 203, 144, 145, 204, 151, 153, 205, 183, 184};
        slash_n() for (size_t i = 0; i < 47; i++) {
          lang_cout(1, banner_1[i]);
          slash_n()
        }
        slash_n() std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        switch_b_sav = switch_b_should_be;
        switch_b_should_be = 2;
        if (std::cin.fail()) {
          chosen_event = 0;
          cin_error_by() return 1;
        }
        if (chosen_event == -1) {
          chosen_event = 0;
          is_cross = true;
          slash_n() return 2;
        }
        if (chosen_event == -2) {
          chosen_event = 0;
          is_cross = true;
          slash_n() return 3;
        }
        if (chosen_event == -120) {
        language_setting_local:
#if CN_H
          std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
          std::cin >> lang_status;
          slash_n() {
            if (std::cin.fail() || lang_status > 1) {
              lang_status = 0;
              cin_error_by3();
              goto language_setting_local;
            }
            {
              chosen_event = 0;
              return 1;
            }  // else
          }
        }
        if (chosen_event > 0 && chosen_event < 30) {
          quit = false;
        } else {
          slash_n() lang_cout(1, 31);
          slash_n() return 1;
        }
      }
      break;
    case 2: {
      chosen_event = 0;
      static const size_t banner_2[13] = {12,  13,  109, 161, 202, 107, 203,
                                          146, 147, 204, 154, 205, 185};
      slash_n() for (size_t i = 0; i < 13; i++) {
        lang_cout(1, banner_2[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      switch_b_sav = switch_b_should_be;
      switch_b_should_be = 1;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      }
      if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      }
      if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      }
      if (chosen_event == -120) {
      language_setting_local_1:
#if CN_H
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
        std::cin >> lang_status;
        slash_n() {
          if (std::cin.fail() || lang_status > 1) {
            lang_status = 0;
            cin_error_by3();
            goto language_setting_local_1;
          }
          {
            chosen_event = 0;
            return 1;
          }  // else
        }
      }
      if (chosen_event > 0 && chosen_event < 6) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 3: {
      chosen_event = 0;
      static const size_t banner_3[46] = {
          12,  13,  109, 161, 192, 32,  33,  193, 34,  35,  194, 36,
          37,  195, 38,  39,  196, 40,  41,  197, 42,  43,  198, 44,
          45,  199, 46,  47,  200, 96,  97,  201, 104, 105, 202, 111,
          126, 203, 148, 149, 204, 152, 155, 205, 186, 206};  // MID_MOD
      slash_n() for (size_t i = 0; i < 46; i++) {             // MID_MOD
        lang_cout(1, banner_3[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      }
      if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      }
      if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      }
      if (chosen_event == -120) {
      language_setting_local_2:
#if CN_H
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
        std::cin >> lang_status;
        slash_n() {
          if (std::cin.fail() || lang_status > 1) {
            lang_status = 0;
            cin_error_by3();
            goto language_setting_local_2;
          }
          {
            chosen_event = 0;
            return 1;
          }  // else
        }
      }
      if (chosen_event > 0 && chosen_event < 29) {  // MID_MOD
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 4: {
      chosen_event = 0;
      static const size_t banner_4[22] = {12,  13,  109, 161, 192, 48, 194, 49,
                                          197, 50,  198, 51,  200, 98, 201, 99,
                                          202, 106, 203, 110, 204, 150};
      slash_n() for (size_t i = 0; i < 22; i++) {
        lang_cout(1, banner_4[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      }
      if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      }
      if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      }
      if (chosen_event == -120) {
      language_setting_local_3:
#if CN_H
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
        std::cin >> lang_status;
        slash_n() {
          if (std::cin.fail() || lang_status > 1) {
            lang_status = 0;
            cin_error_by3();
            goto language_setting_local_3;
          }
          {
            chosen_event = 0;
            return 1;
          }  // else
        }
      }
      if (chosen_event > 0 && chosen_event < 10) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 5: {
      chosen_event = 0;
      static const size_t banner_5[6] = {12, 13, 109, 161, 192, 52};
      slash_n() for (size_t i = 0; i < 6; i++) {
        lang_cout(1, banner_5[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      }
      if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      }
      if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      }
      if (chosen_event == -120) {
      language_setting_local_4:
#if CN_H
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
        std::cin >> lang_status;
        slash_n() {
          if (std::cin.fail() || lang_status > 1) {
            lang_status = 0;
            cin_error_by3();
            goto language_setting_local_4;
          }
          {
            chosen_event = 0;
            return 1;
          }  // else
        }
      }
      if (chosen_event == 1) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case -120: {
    language_setting_local_5:
#if CN_H
      std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
      std::cin >> lang_status;
      slash_n() {
        if (std::cin.fail() || lang_status > 1) {
          lang_status = 0;
          cin_error_by3();
          goto language_setting_local_5;
        }
        {
          chosen_event = 0;
          return 2;
        }  // else
      }
    }
    default: {
      chosen_banner = 0;
      chosen_event = 0;
      quit = true;
      slash_n() lang_cout(1, 53);
      slash_nn() return 2;
    }
  }
  return 0;
}

void pre_wishes() {
  d_item_c = true;
  ini_ams(animlocation, 10, one_to_ten);
  ini_ams(animsublocation, 10, one_to_ten);
  ini_ams(animsubsublocation, 10, one_to_ten);
  anim_kind = 127;
  anim_location = 0;
  anim_sublocation = 0;
  anim_subsublocation = 0;
  star_max = 0;
  if (fate_weapon > 2 || fate_weapon < 0) {
    fate_weapon = 0;
  }
  for (size_t& ini : animkind) {
    ini = 127;
  }
  static const size_t ewn[6] = {54, 55, 56, 57, 58, 59};
  slash_n() for (size_t i = 0; i < 6; i++) {
    lang_cout(1, ewn[i]);
    slash_n()
  }
  lang_cout(1, 60);
  if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 3 ||
      chosen_banner == 4) {
    slash_dn() lang_cout(1, 90);
  }
  if (chosen_banner == 3 && chosen_event > 14) {
    slash_dn() lang_cout(1, 61);
  }
  slash_dn() lang_cout(1, 158);
  slash_dn() lang_cout(1, 165);
  slash_dn() lang_cout(1, 170);
  slash_dn() lang_cout(1, 174);
  if (chosen_banner != 5) {
    slash_dn() lang_cout(1, 178);
    slash_dn() lang_cout(1, 128);
  }
  slash_dn() lang_cout(1, 113);
  slash_n() lang_cout(1, 161);
  for (size_t i = 0; i < 9; i++) {
    if (ach_q[i]) {
      achp_check = true;
    }
  }
  if (achp_check) {
    slash_n() lang_cout(1, 162);
  }
  slash_dn() lang_cout(1, 191);
  slash_dn() lang_cout(1, 187);
  slash_nn()
}

int wishes_31() {
  ptrdiff_t sav[16] = {0};
enter_hash:
  size_t j = 0;
  size_t k = 0;
  char hash_sav[256] = {'\0'};
  char hash_dump[9][25] = {{'\0'}};
  lang_cout(1, 179);
  slash_nn() lang_cout(1, 182);
  slash_nn() std::cin >> hash_sav;
  if (std::cin.fail()) {
    cin_error_by2() goto enter_hash;
  }
  if (hash_sav[0] == '-' && hash_sav[1] == '1') {
    slash_n() return 1;
  }
  if (hash_sav[0] != '&') {
    slash_n() lang_cout(1, 181);
    slash_nn() std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    goto enter_hash;
  }
  for (size_t i = 1; i < 256; i++) {
    if (k > 24 || ((hash_sav[i] == '*' || hash_sav[i] == '&') && k == 0)) {
      slash_n() lang_cout(1, 181);
      slash_nn() goto enter_hash;
    }
    if (std::isdigit(static_cast<unsigned char>(hash_sav[i]))) {
      hash_dump[j][k] = hash_sav[i];
      k++;
    } else if (hash_sav[i] == '*' && k > 0) {
      j++;
      k = 0;
    } else if (((chosen_banner == 1 || chosen_banner == 2 ||
                 chosen_banner == 4) &&
                j == 8 && hash_sav[i] == '&') ||
               ((chosen_banner == 3) && j == 9 && hash_sav[i] == '&')) {
      goto apply_hash;
    } else {
      slash_n() lang_cout(1, 181);
      slash_nn() goto enter_hash;
    }
  }
apply_hash:
  for (size_t i = 0; i < 9; i++) {
    sav[i] = std::stoll(hash_dump[i]);
  }
  if (hash_apply(sav) == 2) {
    return 1;
  }
  return 0;
}

int wishes_63() {
  bool zero_input_check = true;
  bool zero_input_recheck = true;
  while (true) {
    static ptrdiff_t ij = 0;
  enter_ij:
    lang_cout(1, 114);
    slash_nn() lang_cout(1, 121);
    slash_n() for (size_t uk5 : three_g) {
      std::cout << uk5 << ": ";
      lang_cout(3, uk5);
      slash_n() d_item[uk5] = 1;
    }
    if (chosen_banner == 1 || chosen_banner == 2) {
      slash_n() lang_cout(1, 120);
      slash_n() for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
        std::cout << nup_four_c[uk3] << ": ";
        lang_cout(3, nup_four_c[uk3]);
        slash_n() d_item[nup_four_c[uk3]] = 1;
      }
      for (size_t uk4 = 0; uk4 < 18; uk4++) {
        std::cout << nup_four_w[uk4] << ": ";
        lang_cout(3, nup_four_w[uk4]);
        slash_n() d_item[nup_four_w[uk4]] = 1;
      }
      slash_n() lang_cout(1, 119);
      slash_n() for (size_t uk2 = 0; uk2 < 3; uk2++) {
        std::cout << up_four_g[uk2] << ": ";
        lang_cout(3, up_four_g[uk2]);
        slash_n() d_item[up_four_g[uk2]] = 1;
      }
      slash_n() lang_cout(1, 118);
      slash_n() for (size_t ukt = 0; ukt < 5; ukt++) {
        std::cout << nup_five_c[ukt] << ": ";
        lang_cout(3, nup_five_c[ukt]);
        slash_n() d_item[nup_five_c[ukt]] = 1;
      }
      slash_n() lang_cout(1, 117);
      std::cout << '\n' << up_five << ": ";
      lang_cout(3, up_five);
      slash_n() d_item[up_five] = 1;
    } else if (chosen_banner == 3) {
      slash_n() lang_cout(1, 120);
      slash_n() for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
        std::cout << nup_four_c[uk3] << ": ";
        lang_cout(3, nup_four_c[uk3]);
        slash_n() d_item[nup_four_c[uk3]] = 1;
      }
      for (size_t uk4 = 0; uk4 < 18; uk4++) {
        std::cout << nup_four_w[uk4] << ": ";
        lang_cout(3, nup_four_w[uk4]);
        slash_n() d_item[nup_four_w[uk4]] = 1;
      }
      slash_n() lang_cout(1, 119);
      slash_n() for (size_t uk2 = 0; uk2 < 5; uk2++) {
        std::cout << up_four_g[uk2] << ": ";
        lang_cout(3, up_four_g[uk2]);
        slash_n() d_item[up_four_g[uk2]] = 1;
      }
      slash_n() lang_cout(1, 118);
      slash_n() for (size_t uktt = 0; uktt < 10; uktt++) {
        std::cout << nup_five_w[uktt] << ": ";
        lang_cout(3, nup_five_w[uktt]);
        slash_n() d_item[nup_five_w[uktt]] = 1;
      }
      slash_n() lang_cout(1, 117);
      slash_n() for (size_t uk = 0; uk < 2; uk++) {
        std::cout << up_five_g[uk] << ": ";
        lang_cout(3, up_five_g[uk]);
        slash_n() d_item[up_five_g[uk]] = 1;
      }
    } else if (chosen_banner == 4) {
      slash_n() lang_cout(1, 120);
      slash_n() for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
        std::cout << nup_four_c[uk3] << ": ";
        lang_cout(3, nup_four_c[uk3]);
        slash_n() d_item[nup_four_c[uk3]] = 1;
      }
      for (size_t uk4 = 0; uk4 < 18; uk4++) {
        std::cout << nup_four_w[uk4] << ": ";
        lang_cout(3, nup_four_w[uk4]);
        slash_n() d_item[nup_four_w[uk4]] = 1;
      }
      slash_n() lang_cout(1, 118);
      slash_n() for (size_t ukt = 0; ukt < 5; ukt++) {
        std::cout << nup_five_c[ukt] << ": ";
        lang_cout(3, nup_five_c[ukt]);
        slash_n() d_item[nup_five_c[ukt]] = 1;
      }
      for (size_t uktt = 0; uktt < 10; uktt++) {
        std::cout << nup_five_w[uktt] << ": ";
        lang_cout(3, nup_five_w[uktt]);
        slash_n() d_item[nup_five_w[uktt]] = 1;
      }
    } else if (chosen_banner == 5) {
      slash_n() lang_cout(1, 120);
      slash_n() for (size_t uk3 = 0; uk3 < 11; uk3++) {
        std::cout << nup_four_c[uk3] << ": ";
        lang_cout(3, nup_four_c[uk3]);
        slash_n() d_item[nup_four_c[uk3]] = 1;
      }
      slash_n() lang_cout(1, 118);
      slash_n() for (size_t ukt = 0; ukt < 5; ukt++) {
        std::cout << nup_five_c[ukt] << ": ";
        lang_cout(3, nup_five_c[ukt]);
        slash_n() d_item[nup_five_c[ukt]] = 1;
      }
    } else {
      lang_cout(4, 7);
      slash_n() error_code = 7;
      full_quit_f()
    }
    slash_n() lang_cout(1, 116);
    slash_n() lang_cout(1, 123);
    slash_nn() std::cin >> ij;
    if (std::cin.fail()) {
      ij = 0;
      cin_error_by2() goto enter_ij;
    }
    if (ij == -1) {
      for (size_t i = 0; i < 127; i++) {
        if (d_item_n[i] > 0) {
          zero_input_check = false;
        }
      }
      if (zero_input_check) {
        ij = 0;
        d_item_c = false;
        slash_n() lang_cout(1, 125);
        slash_n() return 1;
      } else {
        ij = 0;
        slash_n() head_print();
        return 2;
      }
    } else if (ij == -2) {
      ij = 0;
      for (size_t qi = 0; qi < MAX_ITEMS; qi++) {
        d_item_n[qi] = 0;
      }
      slash_n() return 1;
    } else if (ij > -1) {
      if (ij > 127 || d_item[ij] == 0) {
        ij = 0;
        slash_n() lang_cout(1, 122);
        slash_nn() goto enter_ij;
      }
    enter_d_item:
      slash_n() lang_cout(1, 115);
      lang_cout(3, static_cast<size_t>(ij));
      lang_cout(1, 124);
      slash_nn() std::cin >> d_item_n[ij];
      if (std::cin.fail()) {
        d_item_n[ij] = 0;
        cin_error_by() goto enter_d_item;
      }
      if (d_item_n[ij] > 0) {
        zero_input_recheck = false;
      }
      if ((countx < 1 && zero_input_recheck) || d_item_n[ij] > LLONG_MAX) {
        slash_n() lang_cout(1, 72);
        slash_n() goto enter_d_item;
      }
      slash_n()
    } else {
      ij = 0;
      lang_cout(1, 72);
      slash_n() goto enter_ij;
    }
  }
}

void luckcpy() {
  if (luck > luckiest || countx_l < 11) {
    luckiest = luck;
    for (size_t templuck = 0; templuck < 10; templuck++) {
      luckiestlocation[templuck] = lucklocation[templuck];
      luckiestsublocation[templuck] = lucksublocation[templuck];
      luckiestsubsublocation[templuck] = lucksubsublocation[templuck];
      luckiestkind[templuck] = luckkind[templuck];
    }
  }
}  // snapshot the luckiest moment

void luckget() {
  for (size_t templuck = 0; templuck < 9; templuck++) {
    lucklocation[templuck] = lucklocation[templuck + 1];
    lucksublocation[templuck] = lucksublocation[templuck + 1];
    lucksubsublocation[templuck] = lucksubsublocation[templuck + 1];
    luckkind[templuck] = luckkind[templuck + 1];
    luckstar[templuck] = luckstar[templuck + 1];
  }
  countx_l++;
  lucklocation[9] = countx;
  lucksublocation[9] = static_cast<size_t>(five_star_assurance_number) - 1;
  lucksubsublocation[9] = static_cast<size_t>(four_star_assurance_number) - 1;
  luckkind[9] = kind;
  luckstar[9] = star;
  luck = 0;
}  // get the recorded luckiest

void lang_cout(unsigned int sq, size_t sw) {
  if (lang_status == 0) {
    switch (sq) {
      case 1:
#if EN_H
        std::cout << s_pstring_en[sw];
#endif
        break;
      case 2:
#if EN_ITEM_H
        std::cout << s_pname_en[sw];
#endif
        break;
      case 3:
#if EN_ITEM_H
        std::cout << s_pnameshort_en[sw];
#endif
        break;
      case 4:
#if EN_H
        std::cout << s_perror_en[sw];
#endif
        break;
      case 5:
#if EN_H
        std::cout << s_pvalue_en[sw];
#endif
        break;
      case 6:
#if EN_H
        std::cout << s_pachieve_en[sw];
#endif
        break;
      case 7:
#if EN_ITEM_H
        std::cout << s_pdetails_en[sw];
#endif
        break;
      default: {
#if CN_H
        std::cout << EN_E_13 << '\n' << CN_E_13 << '\n';
#endif
        error_code = 13;
        quit = true;
      }
    }
  } else if (lang_status == 1) {
    switch (sq) {
      case 1:
#if CN_H
        std::cout << s_pstring_cn[sw];
#endif
        break;
      case 2:
#if CN_ITEM_H
        std::cout << s_pname_cn[sw];
#endif
        break;
      case 3:
#if CN_ITEM_H
        std::cout << s_pnameshort_cn[sw];
#endif
        break;
      case 4:
#if CN_H
        std::cout << s_perror_cn[sw];
#endif
        break;
      case 5:
#if CN_H
        std::cout << s_pvalue_cn[sw];
#endif
        break;
      case 6:
#if CN_H
        std::cout << s_pachieve_cn[sw];
#endif
        break;
      case 7:
#if CN_ITEM_H
        std::cout << s_pdetails_cn[sw];
#endif
        break;
      default: {
#if CN_H
        std::cout << EN_E_13 << '\n' << CN_E_13 << '\n';
#endif
        error_code = 13;
        quit = true;
      }
    }
  } else {
#if CN_H
    std::cout << EN_E_12 << '\n' << CN_E_12 << '\n';
#endif
    error_code = 12;
    quit = true;
  }
}
// care for possible out of bound

void pre_ccloop() {
  if (y_anim) {
    if (wishes_number == 1) {
      anim_number = 1;
    } else if (wishes_number == 10) {
      anim_number = 10;
    } else {
      y_anim_del = true;
      y_anim = false;
      lang_cout(1, 177);
      slash_nn() anim_number = 0;
    }
  }
  countx_r = countx;
  wishes_number_r = wishes_number;
  wishes_number_r_t = static_cast<signed long long int>(
      static_cast<double>(wishes_number_r) / 100.0);
  delay_prog = wishes_number_r_t;
  delay_r = 0;
  if (y_arg) {
    lang_cout(1, 1);
    slash_n() lang_cout(1, 2);
    slash_n() lang_cout(1, 3);
    slash_n() lang_cout(1, 4);
    slash_nn() lang_cout(1, 85);
    slash_nn()
  }
  if (!is_s_mode) {
    d_item_c = false;
  }
  if (!y_arg && !y_print && y_prog) {
    if (is_s_mode || y_track_luck_mode) {
      std::cout << "\r";
      lang_cout(1, 169);
    } else {
      prog_p()
    }
  }
}

void stat_out() {
  slash_n() lang_cout(1, 86);
  std::cout << t_start << '\n';
  lang_cout(1, 87);
  std::cout << t_end << '\n';
  std::cout << static_cast<double>(elapsed_time) * 1.0 / 1000000.0;
  lang_cout(1, 84);
  slash_n() if (max_fives > 86 && chosen_banner != 5) { ach[3] = true; }
  if (five_count == 0) {
    slash_n() lang_cout(1, 127);
    std::cout << countx - countx_r;
    lang_cout(1, 74);
    slash_n() lang_cout(1, 73);
    std::cout << countx;
    lang_cout(1, 74);
    slash_n() lang_cout(1, 75);
    std::cout << five_count << "  "
              << static_cast<double>(five_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n";
    lang_cout(1, 76);
    std::cout << four_count << "  "
              << static_cast<double>(four_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n";
    lang_cout(1, 77);
    std::cout << five_count_c << " : " << five_count_w << " : " << four_count_c
              << " : " << four_count_w << "\n\n";
  } else {
    slash_n() lang_cout(1, 127);
    std::cout << countx - countx_r;
    lang_cout(1, 74);
    slash_n() lang_cout(1, 73);
    std::cout << countx;
    lang_cout(1, 74);
    slash_n() lang_cout(1, 75);
    std::cout << five_count << "  "
              << static_cast<double>(five_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n";
    lang_cout(1, 76);
    std::cout << four_count << "  "
              << static_cast<double>(four_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n";
    lang_cout(1, 78);
    std::cout << max_fives;
    lang_cout(1, 79);
    std::cout << max_fivesth;
    lang_cout(1, 80);
    std::cout << max_fivecount + 1;
    lang_cout(1, 81);
    slash_n() lang_cout(1, 82);
    std::cout << min_fives;
    lang_cout(1, 79);
    std::cout << min_fivesth;
    lang_cout(1, 80);
    std::cout << min_fivecount + 1;
    lang_cout(1, 81);
    slash_n() lang_cout(1, 83);
    std::cout << static_cast<double>(ave_fives) * 1.0 /
                     static_cast<double>(five_count)
              << '\n';
    lang_cout(1, 77);
    std::cout << five_count_c << " : " << five_count_w << " : " << four_count_c
              << " : " << four_count_w << "\n\n";
  }
  for (const size_t iout : five_stars_c) {
    if (pcount[iout] > 0) {
      lang_cout(3, iout);
      std::cout << "(" << pcount[iout] << ") ";
    }
  }
  for (const size_t iout : five_stars_w) {
    if (pcount[iout] > 0) {
      lang_cout(3, iout);
      std::cout << "(" << pcount[iout] << ") ";
    }
  }
  if (five_count > 0) {
    slash_nn()
  }
  for (const size_t iout : four_stars_c) {
    if (pcount[iout] > 0) {
      lang_cout(3, iout);
      std::cout << "(" << pcount[iout] << ") ";
    }
  }
  for (const size_t iout : four_stars_w) {
    if (pcount[iout] > 0) {
      lang_cout(3, iout);
      std::cout << "(" << pcount[iout] << ") ";
    }
  }
  slash_nn() iacheck = false;
  for (size_t iach = 0; iach < 12; iach++) {
    if (ach[iach] && !ach_q[iach]) {
      const size_t achdis = iach + iach + 3;
      const size_t achname = iach + iach + 4;
      lang_cout(6, 0);
      lang_cout(6, achdis);
      lang_cout(6, 1);
      lang_cout(6, achname);
      lang_cout(6, 2);
      ach_q[iach] = true;
      iacheck = true;
    }
  }
  if (iacheck) {
    slash_n()
  }
}

int wishes_5() {
  if (chosen_banner == 5 || four_count == 0 || five_count == 0) {
    wishes_number = 0;
    lang_cout(1, 72);
    slash_n() return 1;
  }  // no novice

  if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
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
    return 1;
  }  // for chars

  if (chosen_banner == 3) {
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
    return 1;
  }  // for weapons

  {
    wishes_number = 0;
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_f()
  }  // illegal
}

int e_wishes() {
  if (wishes_number == -1) {
    wishes_number = 0;
    return 2;
  }  // -1 for father options

  if (wishes_number == -2) {
    for (size_t templuck = 0; templuck < 10; templuck++) {
      if (luckiestkind[templuck] > MAX_ITEMS - 1) {
        lang_cout(1, 62);
        slash_n() return 1;
      }
    }  // check if overpass the max item

    if (countx_l < 10) {
      lang_cout(1, 62);
      slash_n() return 1;
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
    return 1;
  }  // -2 for luckiness display

  if (wishes_number == -3) {
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
      return 1;
    }
    if (cleanornot == -1) {
      cleanornot = 0;
      wishes_number = 0;
      return 1;
    }
    {
      cleanornot = 0;
      wishes_number = 0;
      lang_cout(1, 72);
      slash_nn() goto enter_cleanornot;
    }  // else
  }    // clean your bedroom everyday
  }

  if (wishes_number == -4) {
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
    return 1;
  }

  if (wishes_number == -5) {
    int wishes_5_r = wishes_5();
    if (wishes_5_r == 1) {
      return 1;
    }
    { return error_code; }  // else
  }

  if (wishes_number == -6) {
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
      }
      if (fate_weapon == -1) {
        fate_weapon = 0;
        return 1;
      }
      if (fate_weapon > 2) {
        slash_n() lang_cout(1, 72);
        slash_nn() fate_weapon = 0;
        goto enter_fate_weapon;
      }
      { fate_points = 0; }  // else
      wishes_number = 0;
      return 1;
    }  // if available

    {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
    }  // if not
  }

  if (wishes_number == -7) {
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
    return 1;
  }  // luck switch

  if (wishes_number == -8) {
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
    return 1;
  }  // prog switch

  if (wishes_number == -9) {
    wishes_number = 0;
    signed int temptuck;
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
    }
    if (tuck == -1) {
      tuck = 0;
      return 1;
    }
    if (tuck > 10 || tuck < 1) {
      slash_n() lang_cout(1, 72);
      slash_nn() tuck = 0;
      goto enter_tuck;
    }
    if (tuck <= temptuck) {
      slash_n() lang_cout(1, 173);
      slash_nn() tuck = 0;
      goto enter_tuck;
    }
    {
      y_track_luck = true;
      y_track_luck_mode = true;
      y_luck = true;
      slash_n() head_print();
      return 3;
    }  // else
  }    // marathon settings

  if (wishes_number == -10) {
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
    return 1;
  }  // anim switch

  if (wishes_number == -11) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
    }
    hash_gen();
    hash_p();
    wishes_number = 0;
    return 1;
  }  // hash generator

  if (wishes_number == -31) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
    }
    {
      const int wishes_31_r = wishes_31();
      if (wishes_31_r == 1) {
        return 1;
      } else {
        wishes_number = 0;
        return 1;
      }
    }
  }  // manual settings

  if (wishes_number == -63) {
    wishes_number = 0;
    is_s_mode = true;
    {
      const int wishes_63_r = wishes_63();
      if (wishes_63_r == 1) {
        return 1;
      }
      { return 3; }
    }
  }  // s_mode settings

  if (wishes_number == -127) {
    wishes_number = 0;
    wishes_127();
    return 1;
  }  // debugger

  if (wishes_number == -120) {
  language_setting_local_6:
#if CN_H
    std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
    std::cin >> lang_status;
    slash_n() if (std::cin.fail() || lang_status > 1) {
      lang_status = 0;
      cin_error_by3();
      goto language_setting_local_6;
    }
    {
      wishes_number = 0;
      return 1;
    }  // else
  }    // language just-in-time

  if (wishes_number == -270) {
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
    slash_n() return 1;
  }  // what? achievements

  if (wishes_number == -384) {
    wishes_number = 0;
    wishes_384();
    return 1;
  }

  if (wishes_number == -511) {
    lang_cout(1, 188);
    slash_nn() if (y_savtof) {
      y_savtof = false;
      lang_cout(1, 189);
      slash_n()
    }
    else {
      y_savtof = true;
      lang_cout(1, 190);
      slash_n()
    }
    wishes_number = 0;
    return 1;
  }  // sav to file

  if (wishes_number < 1) {
    wishes_number = 0;
    lang_cout(1, 72);
    slash_n() return 1;
  }  // invalid settings

  { head_print(); }  // else

  return 3;
}

void anim_p() {
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
    }
  }
  // animation

  if (y_anim_del) {
    y_anim_del = false;
    y_anim = true;
  }
  // reset
}

int ccloop() {
  if (chosen_banner == 1 || chosen_banner == 2) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 2;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_1();
      output_string();
      post_add();
      error_code = post_ccloop_1(anim_loop);
    }
  }
  // chars up

  else if (chosen_banner == 3) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 4;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_3();
      output_string();
      post_add();
      error_code = post_ccloop_3(anim_loop);
    }
  }
  // weapons up

  else if (chosen_banner == 4) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_4();
      output_string();
      post_add();
      error_code = post_ccloop_4(anim_loop);
    }
  }
  // no up

  else if (chosen_banner == 5) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 1000;
      star = 0;  // 4-star or 5-star
      kind = 0;  // which exactly
      core_f_5();
      output_string();
      post_add();
      error_code = post_ccloop_5(anim_loop);
    }
  }  // novice

  else {
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_f()
  }
  return 0;
}

int ccloop_of() {
  std::ofstream output_file(fn, std::ios::binary | std::ios::app);
  if (output_file.is_open()) {
    unsigned char x[5] = {'\0'};
    x[0] = static_cast<unsigned char>(seed);
    x[1] = static_cast<unsigned char>(0xFF);
    x[2] = static_cast<unsigned char>(chosen_banner);
    x[3] = static_cast<unsigned char>(chosen_event);
    x[4] = static_cast<unsigned char>(0xFF);
    output_file.write(reinterpret_cast<const char*>(x), sizeof(x));
  } else {
    error_code = 377;
  }
  if (chosen_banner == 1 || chosen_banner == 2) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 2;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_1();
      output_string();
      fileout() post_add();
      error_code = post_ccloop_1(anim_loop);
    }
  }
  // chars up

  else if (chosen_banner == 3) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 4;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_3();
      output_string();
      fileout() post_add();
      error_code = post_ccloop_3(anim_loop);
    }
  }
  // weapons up

  else if (chosen_banner == 4) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_4();
      output_string();
      fileout() post_add();
      error_code = post_ccloop_4(anim_loop);
    }
  }
  // no up

  else if (chosen_banner == 5) {
    size_t anim_loop = 0;
    while (wishes_number > 0 || d_item_c || y_track_luck) {
      temp1 = generatorz() % 1000;
      star = 0;  // 4-star or 5-star
      kind = 0;  // which exactly
      core_f_5();
      output_string();
      fileout() post_add();
      error_code = post_ccloop_5(anim_loop);
    }
  }  // novice

  else {
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_f()
  }
  output_file.close();
  return 0;
}

int post_ccloop_1(size_t& anim_loop) {
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
      luckget();
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
  return 0;
}

int post_ccloop_3(size_t& anim_loop) {
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
      luckget();
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
  return 0;
}

int post_ccloop_4(size_t& anim_loop) {
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
      luckget();
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
  return 0;
}

int post_ccloop_5(size_t& anim_loop) {
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
      luckget();
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
  return 0;
}

void cin_error_by3() {
#if CN_H
  std::cout << '\n' << EN_S_72 << '\n' << CN_S_72 << "\n\n";
#endif
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void wishes_384() {
  for (size_t i = 0; i < MAX_ITEMS; i++) {
    std::cout << i << " ";
    lang_cout(2, i);
    std::cout << " || ";
    lang_cout(7, i);
    slash_n()
  }
}
