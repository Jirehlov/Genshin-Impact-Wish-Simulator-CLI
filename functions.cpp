#include "functions.h"

void casesx(size_t kind) {
  if (kind < 15) {
    std::cout << "!!!!!***** ";
  } else if (kind < 50) {
    std::cout << "!!**** ";
  } else if (kind < 63) {
    std::cout << "*** ";
  } else if (kind == 71 || kind == 79 || kind == 80 || kind == 82 ||
             kind == 83 || kind == 84 || kind == 88 || kind == 91 ||
             kind == 95 || kind == 100 || kind == 102 || kind == 103 ||
             kind == 104 || kind == 106 || kind == 108) {
    std::cout << "!!**** ";
  } else if (kind < MAX_ITEMS) {
    std::cout << "!!!!!***** ";
  } else {
    lang_cout(4, 1);
    std::cout << "  ";
    error_code = 1;
    full_quit_e();
  }
}  // cout stars prefix

void ini_all(size_t* in, size_t ins, size_t nu) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = nu;
  }
}

void ini_ams(size_t* in, size_t ins, const size_t* out) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = out[i];
  }
}  // for of the same size

void set_pool_1(size_t up_five_p, size_t size_nup_four_c_p,
                const size_t* tempg1, const size_t* tempg5,
                const size_t* nup_four_cgm) {
  up_five = up_five_p;
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempg1);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 8, tempg5);
}

void set_pool_3(size_t size_nup_four_c_p, const size_t* tempg1,
                const size_t* tempg5, const size_t* tempg6,
                const size_t* tempg7, const size_t* nup_four_cgm) {
  ini_ams(up_five_g, 2, tempg6);
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 5, tempg1);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 8, tempg5);
  ini_ams(five_check, 8, tempg7);
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

void animation_gen(const unsigned int star) {
  if (anim_number == 10) {
    if (star == 4) {
      for (size_t i = 0; i < 27; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 8; i++) {
        std::cout << "(*)";
        std::this_thread::sleep_for(std::chrono::milliseconds(160));
      }
    } else if (star == 5) {
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
      full_quit_e();
    }
  } else if (anim_number == 1) {
    if (star == 3) {
      for (size_t i = 0; i < 20; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
      for (size_t i = 0; i < 15; i++) {
        std::cout << "*";
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
      }
    } else if (star == 4) {
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
    } else if (star == 5) {
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
      full_quit_e();
    }
  } else {
    lang_cout(4, 16);
    std::cout << "  ";
    error_code = 16;
    full_quit_e();
  }
  slash_n()
}

void hash_gen() {
  ptrdiff_t hash_out[9] = {0};
  hash_out[0] = static_cast<ptrdiff_t>(five_star_guarantee_number);
  hash_out[1] = five_star_assurance_number;
  hash_out[2] = static_cast<ptrdiff_t>(four_star_guarantee_number);
  hash_out[3] = four_star_assurance_number;
  hash_out[4] = unmet5_c + 1;
  hash_out[5] = unmet5_w + 1;
  hash_out[6] = unmet4_c + 1;
  hash_out[7] = unmet4_w + 1;
  hash_out[8] = fate_weapon;
  lang_cout(1, 180);
  slash_n() std::cout << "\n&" << hash_out[0];
  for (size_t i = 1; i < 9; i++) {
    std::cout << "*" << hash_out[i];
  }
  std::cout << "&\n\n";
}

void enter_chosen_banner_f() {
  d_item_c = true;
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
  anim_kind = 127;
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
  ini_all(d_item, 128, 0);
  ini_all(d_item_n, 128, 0);
  ini_all(up_five_g, 2, 0);
  ini_all(up_four_g, 16, 0);
  ini_all(nup_four_c, 32, 0);
  ini_all(luckkind, 10, 127);
  for (size_t i = 0; i < 10; i++) {
    luckstar[i] = 3;
  }
  ini_all(luckiestkind, 10, 127);
  ini_all(animkind, 10, 127);
  ini_all(five_check, 8, 127);
  ini_all(four_check, 8, 127);
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

void set_banner_f() {
  if (chosen_banner == 1) {
    if (chosen_event < 22) {
      switch_e_should_be = 0;
    }
    switch (chosen_event) {
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
        lang_cout(4, 5);
        slash_n() error_code = 5;
        full_quit_e();
      }
    }
  } else if (chosen_banner == 2) {
    switch (chosen_event) {
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
        lang_cout(4, 5);
        slash_n() full_quit_e();
      }
    }
  } else if (chosen_banner == 3) {
    switch (chosen_event) {
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
        lang_cout(4, 5);
        slash_n() full_quit_e();
      }
    }
  } else if (chosen_banner == 4) {
    switch (chosen_event) {
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
        lang_cout(4, 5);
        slash_n() full_quit_e();
      }
    }
  } else if (chosen_banner == 5) {
    ini_ams(nup_four_c, 11, nup_four_cg1);
  } else {
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_e();
  }
}

void output_string(size_t& kind) {
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
  countx++;
  five_star_assurance_number++;
  four_star_assurance_number++;
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
  wishes_number = 0;
  four_star_assurance_number = 1;
  five_star_assurance_number = 1;
  five_star_guarantee_number = false;
  four_star_guarantee_number = false;
  countx = 0;
  countx_r = 0;
  five_count = 0;
  five_count_c = 0;
  five_count_w = 0;
  four_count = 0;
  four_count_c = 0;
  four_count_w = 0;
  is_noelle = true;
  ave_fives = 0;
  max_fives = 1;
  if (chosen_banner == 3) {
    min_fives = 80;
  } else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
    min_fives = 90;
  } else if (chosen_banner == 5) {
    min_fives = PTRDIFF_MAX;
  } else {
    lang_cout(4, 7);
    slash_n() error_code = 7;
    full_quit_e();
  }
  max_fivesth = 1;
  min_fivesth = 1;
  max_fivecount = 1;
  min_fivecount = 1;
  unmet4_c = 0;
  unmet4_w = 0;
  unmet5_c = 0;
  unmet5_w = 0;
  fate_points = 0;
  for (size_t& ini : pcount) {
    ini = 0;
  }
  luck = 0;
  for (size_t ini = 0; ini < 10; ini++) {
    lucklocation[ini] = static_cast<size_t>(ini) + 1;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    lucksublocation[ini] = static_cast<size_t>(ini) + 1;
  }
  for (size_t& ini : luckkind) {
    ini = 127;
  }
  for (unsigned int& ini : luckstar) {
    ini = 3;
  }
  luckiest = 0;
  for (size_t ini = 0; ini < 10; ini++) {
    luckiestlocation[ini] = static_cast<size_t>(ini) + 1;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    luckiestsublocation[ini] = static_cast<size_t>(ini) + 1;
  }
  for (size_t& ini : luckiestkind) {
    ini = 127;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    four_pity[ini] = 0;
  }
  for (size_t& ini : five_pity) {
    ini = 0;
  }
  for (size_t& ini : five_pity_w) {
    ini = 0;
  }
  for (size_t ini = 0; ini < 127; ini++) {
    d_item[ini] = 0;
  }
  for (size_t ini = 0; ini < 127; ini++) {
    d_item_n[ini] = 0;
  }
  for (size_t ini = 0; ini < 12; ini++) {
    ach_count[ini] = 0;
  }
  for (size_t ini = 0; ini < 12; ini++) {
    ach[ini] = false;
  }
  for (size_t ini = 0; ini < 12; ini++) {
    ach_q[ini] = false;
  }
  kind_r_ach_8 = 0;
  kind_r_ach_11 = 0;
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
  if (argc == 5) {
    int test0 = 0;
    int test1 = 0;
    signed long long int test2 = 0;
    unsigned long int test3 = 0;
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
    } else {
      wishes_number = test2;
    }
    if (test3 != 0 && test3 != 1) {
      lang_cout(4, 12);
      slash_n() error_code = 12;
      y_arg = true;
      full_quit_f()
    } else {
      lang_status = static_cast<unsigned int>(test3);
    }
    quit = false;
    y_arg = true;
    return 1;
  } else if (argc == 4) {
    int test0 = 0;
    int test1 = 0;
    signed long long int test2 = 0;
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
    } else {
      wishes_number = test2;
    }
    quit = false;
    y_arg = true;
    return 2;
  } else if (argc == 1) {
    return 2;
  } else {
    lang_cout(4, 11);
    slash_n() error_code = 11;
    y_arg = true;
    full_quit_f()
  }
}

int enter_chosen_event_f() {
  switch (chosen_banner) {
    case -1:
      error_code = 100;
      full_quit_f()  // to diminish conflicts
          case 1 : {
        chosen_event = 0;
        static const size_t banner_1[31] = {
            12, 13,  109, 161, 14,  15,  16,  17,  18, 19, 20,
            21, 22,  23,  24,  25,  26,  27,  28,  29, 30, 94,
            95, 100, 101, 102, 103, 144, 145, 151, 153};
        slash_n() for (size_t i = 0; i < 31; i++) {
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
        } else if (chosen_event == -1) {
          chosen_event = 0;
          is_cross = true;
          slash_n() return 2;
        } else if (chosen_event == -2) {
          chosen_event = 0;
          is_cross = true;
          slash_n() return 3;
        } else if (chosen_event == -120) {
        language_setting_local:
          std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
          std::cin >> lang_status;
          slash_n() if (std::cin.fail() || lang_status > 1) {
            lang_status = 0;
            cin_error_by3() goto language_setting_local;
          }
          else {
            chosen_event = 0;
            return 1;
          }
        } else if (chosen_event > 0 && chosen_event < 28) {
          quit = false;
        } else {
          slash_n() lang_cout(1, 31);
          slash_n() return 1;
        }
      }
      break;
    case 2: {
      chosen_event = 0;
      static const size_t banner_2[8] = {12, 13, 109, 161, 107, 146, 147, 154};
      slash_n() for (size_t i = 0; i < 8; i++) {
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
      } else if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      } else if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      } else if (chosen_event == -120) {
      language_setting_local_1:
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
        std::cin >> lang_status;
        slash_n() if (std::cin.fail() || lang_status > 1) {
          lang_status = 0;
          cin_error_by3() goto language_setting_local_1;
        }
        else {
          chosen_event = 0;
          return 1;
        }
      } else if (chosen_event > 0 && chosen_event < 5) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 3: {
      chosen_event = 0;
      static const size_t banner_3[30] = {
          12, 13, 109, 161, 32, 33, 34, 35,  36,  37,  38,  39,  40,  41,  42,
          43, 44, 45,  46,  47, 96, 97, 104, 105, 111, 126, 148, 149, 152, 155};
      slash_n() for (size_t i = 0; i < 30; i++) {
        lang_cout(1, banner_3[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      } else if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      } else if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      } else if (chosen_event == -120) {
      language_setting_local_2:
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
        std::cin >> lang_status;
        slash_n() if (std::cin.fail() || lang_status > 1) {
          lang_status = 0;
          cin_error_by3() goto language_setting_local_2;
        }
        else {
          chosen_event = 0;
          return 1;
        }
      } else if (chosen_event > 0 && chosen_event < 27) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 4: {
      chosen_event = 0;
      static const size_t banner_4[13] = {12, 13, 109, 161, 48,  49, 50,
                                          51, 98, 99,  106, 110, 150};
      slash_n() for (size_t i = 0; i < 13; i++) {
        lang_cout(1, banner_4[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      } else if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      } else if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      } else if (chosen_event == -120) {
      language_setting_local_3:
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
        std::cin >> lang_status;
        slash_n() if (std::cin.fail() || lang_status > 1) {
          lang_status = 0;
          cin_error_by3() goto language_setting_local_3;
        }
        else {
          chosen_event = 0;
          return 1;
        }
      } else if (chosen_event > 0 && chosen_event < 10) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case 5: {
      chosen_event = 0;
      static const size_t banner_5[5] = {12, 13, 109, 161, 52};
      slash_n() for (size_t i = 0; i < 5; i++) {
        lang_cout(1, banner_5[i]);
        slash_n()
      }
      slash_n() std::cin >> chosen_event;
      fate_weapon = 0;
      fate_points = 0;
      if (std::cin.fail()) {
        chosen_event = 0;
        cin_error_by() return 1;
      } else if (chosen_event == -1) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 2;
      } else if (chosen_event == -2) {
        chosen_event = 0;
        is_cross = true;
        slash_n() return 3;
      } else if (chosen_event == -120) {
      language_setting_local_4:
        std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
        std::cin >> lang_status;
        slash_n() if (std::cin.fail() || lang_status > 1) {
          lang_status = 0;
          cin_error_by3() goto language_setting_local_4;
        }
        else {
          chosen_event = 0;
          return 1;
        }
      } else if (chosen_event == 1) {
        quit = false;
      } else {
        slash_n() lang_cout(1, 31);
        slash_n() return 1;
      }
    } break;
    case -120: {
    language_setting_local_5:
      std::cout << '\n' << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
      std::cin >> lang_status;
      slash_n() if (std::cin.fail() || lang_status > 1) {
        lang_status = 0;
        cin_error_by3() goto language_setting_local_5;
      }
      else {
        chosen_event = 0;
        return 2;
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
    std::cout << ";\n";
    lang_cout(1, 90);
  }
  if (chosen_banner == 3 && chosen_event > 14) {
    std::cout << ";\n";
    lang_cout(1, 61);
  }
  std::cout << ";\n";
  lang_cout(1, 158);
  std::cout << ";\n";
  lang_cout(1, 165);
  std::cout << ";\n";
  lang_cout(1, 170);
  std::cout << ";\n";
  lang_cout(1, 174);
  if (chosen_banner != 5) {
    std::cout << ";\n";
    lang_cout(1, 178);
    std::cout << ";\n";
    lang_cout(1, 128);
  }
  std::cout << ";\n";
  lang_cout(1, 113);
  slash_n() lang_cout(1, 161);
  for (size_t i = 0; i < 9; i++) {
    if (ach_q[i]) {
      achp_check = true;
    }
  }
  if (achp_check) {
    slash_n() lang_cout(1, 162);
  }
  slash_nn()
}

int wishes_31() {
  ptrdiff_t sav[16] = {0};
  size_t else_counter = 0;
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
    slash_n() goto enter_profile;
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
    } else if (std::isdigit(static_cast<unsigned char>(hash_sav[i]))) {
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
  goto apply_profile;
enter_profile:
  for (size_t i = 0; i < 256; i++) {
    hash_sav[i] = '\0';
  }
  if (chosen_banner == 3 && chosen_event > 14) {
  enter_profile_0:
    lang_cout(1, 138);
    slash_n() lang_cout(1, 139);
    slash_nn() lang_cout(1, 67);
    slash_n() lang_cout(1, 69);
    std::cout << " ( ";
    lang_cout(2, up_five_g[0]);
    std::cout << " ) \n";
    lang_cout(1, 70);
    std::cout << " ( ";
    lang_cout(2, up_five_g[1]);
    std::cout << " ) \n";
    lang_cout(1, 71);
    slash_nn() std::cin >> sav[8];
    if (std::cin.fail()) {
      sav[8] = 0;
      cin_error_by2() goto enter_profile_0;
    } else if (sav[8] == -1) {
      sav[8] = 0;
      wishes_number = 0;
      return 1;
    } else if (sav[8] == -2) {
      goto apply_profile;
    } else if (sav[8] < -1 || sav[8] > 2) {
      sav[8] = 0;
      slash_n() lang_cout(1, 72);
      slash_nn() goto enter_profile_0;
    } else if (sav[8] == 0) {
      slash_n() goto enter_profile_1;
    } else {
      else_counter++;
    }
    slash_n() enter_profile_01 : lang_cout(1, 138);
    slash_n() lang_cout(1, 139);
    slash_nn() lang_cout(1, 140);
    slash_nn() std::cin >> sav[9];
    if (std::cin.fail()) {
      sav[9] = 0;
      cin_error_by2() goto enter_profile_01;
    } else if (sav[9] == -1) {
      sav[9] = 0;
      wishes_number = 0;
      return 1;
    } else if (sav[9] == -2) {
      goto apply_profile;
    } else if (sav[9] != 0 && sav[9] != 1 && sav[9] != 2) {
      sav[9] = 0;
      slash_n() lang_cout(1, 72);
      slash_n() goto enter_profile_01;
    } else {
      else_counter++;
    }
    slash_n()
  } else {
    else_counter++;
  }
enter_profile_1:
  lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 129);
  slash_nn() std::cin >> sav[0];
  if (std::cin.fail()) {
    sav[0] = 0;
    cin_error_by2() goto enter_profile_1;
  } else if (sav[0] == -1) {
    sav[0] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[0] == -2) {
    goto apply_profile;
  } else if (sav[0] != 1 && sav[0] != 0) {
    sav[0] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_1;
  } else {
    else_counter++;
  }
  slash_n() enter_profile_2 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 130);
  lang_cout(1, 137);
  slash_nn() std::cin >> sav[1];
  if (std::cin.fail()) {
    sav[1] = 0;
    cin_error_by() goto enter_profile_2;
  } else if (sav[1] == -1) {
    sav[1] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[1] == -2) {
    goto apply_profile;
  } else if (((chosen_banner == 1 || chosen_banner == 2 ||
               chosen_banner == 4) &&
              sav[1] > 89) ||
             (chosen_banner == 3 && sav[1] > 79) || sav[1] < 0) {
    sav[1] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_2;
  } else {
    else_counter++;
  }
  slash_n() enter_profile_3 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 131);
  slash_nn() std::cin >> sav[2];
  if (std::cin.fail()) {
    sav[2] = 0;
    cin_error_by() goto enter_profile_3;
  } else if (sav[2] == -1) {
    sav[2] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[2] == -2) {
    goto apply_profile;
  } else if (sav[2] != 1 && sav[2] != 0) {
    sav[2] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_3;
  } else {
    else_counter++;
  }
  slash_n() enter_profile_4 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 132);
  lang_cout(1, 137);
  slash_nn() std::cin >> sav[3];
  if (std::cin.fail()) {
    sav[3] = 0;
    cin_error_by() goto enter_profile_4;
  } else if (sav[3] == -1) {
    sav[3] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[3] == -2) {
    goto apply_profile;
  } else if (sav[3] < 0) {
    sav[3] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_4;
  } else {
    else_counter++;
  }
  slash_n() enter_profile_5 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 133);
  lang_cout(1, 137);
  slash_nn() std::cin >> sav[4];
  if (std::cin.fail()) {
    sav[4] = 0;
    cin_error_by() goto enter_profile_5;
  } else if (sav[4] == -1) {
    sav[4] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[4] == -2) {
    goto apply_profile;
  } else if (sav[4] < 0) {
    sav[4] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_5;
  } else if ((chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) &&
             sav[4] > 89) {
    sav[1] = 0;
    slash_n() lang_cout(1, 72);
    slash_n() goto enter_profile_5;
  } else if (chosen_banner == 3 && sav[4] > 79) {
    sav[1] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_5;
  } else {
    else_counter++;
  }
  slash_n() if (chosen_banner == 3 || chosen_banner == 4) {
  enter_profile_6:
    lang_cout(1, 138);
    slash_n() lang_cout(1, 139);
    slash_nn() lang_cout(1, 134);
    lang_cout(1, 137);
    slash_nn() std::cin >> sav[5];
    if (std::cin.fail()) {
      sav[5] = 0;
      cin_error_by() goto enter_profile_6;
    } else if (sav[5] == -1) {
      sav[5] = 0;
      wishes_number = 0;
      return 1;
    } else if (sav[5] == -2) {
      goto apply_profile;
    } else if (sav[5] < 0 || (chosen_banner == 4 && sav[4] > 89) ||
               (chosen_banner == 3 && sav[4] > 79)) {
      sav[5] = 0;
      slash_n() lang_cout(1, 72);
      slash_nn() goto enter_profile_6;
    } else {
      else_counter++;
    }
  }
  slash_n() enter_profile_7 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 135);
  lang_cout(1, 137);
  slash_nn() std::cin >> sav[6];
  if (std::cin.fail()) {
    sav[6] = 0;
    cin_error_by() goto enter_profile_7;
  } else if (sav[6] == -1) {
    sav[6] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[6] == -2) {
    goto apply_profile;
  } else if (sav[6] < 0) {
    sav[6] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_7;
  } else {
    else_counter++;
  }
  slash_n() enter_profile_8 : lang_cout(1, 138);
  slash_n() lang_cout(1, 139);
  slash_nn() lang_cout(1, 136);
  lang_cout(1, 137);
  slash_nn() std::cin >> sav[7];
  if (std::cin.fail()) {
    sav[7] = 0;
    cin_error_by() goto enter_profile_8;
  } else if (sav[7] == -1) {
    sav[7] = 0;
    wishes_number = 0;
    return 1;
  } else if (sav[7] == -2) {
    goto apply_profile;
  } else if (sav[7] < 0) {
    sav[7] = 0;
    slash_n() lang_cout(1, 72);
    slash_nn() goto enter_profile_8;
  } else {
    else_counter++;
  }
  slash_n() apply_profile : slash_n() lang_cout(1, 141);
  slash_n() if (((four_count > 0 || five_count > 0) && sav[1] == sav[3]) ||
                (chosen_banner == 4 && sav[4] != sav[1] && sav[5] != sav[1]) ||
                (sav[6] != sav[3] && sav[7] != sav[3]) ||
                (chosen_banner != 3 && sav[4] > 89 && sav[5] > 89) ||
                (chosen_banner == 3 && sav[4] > 79 && sav[5] > 79) ||
                (sav[8] > 2)) {
    lang_cout(1, 143);
    slash_n() wishes_number = 0;
    return 1;
  }
  slash_n() lang_cout(1, 142);
  slash_n() five_star_guarantee_number = static_cast<bool>(sav[0]);
  five_star_assurance_number = sav[1];
  four_star_guarantee_number = static_cast<bool>(sav[2]);
  four_star_assurance_number = sav[3];
  if (sav[4] > 0) {
    unmet5_c = sav[4] - 1;
  } else {
    unmet5_c = 0;
  }
  if (sav[5] > 0) {
    unmet5_w = sav[5] - 1;
  } else {
    unmet5_w = 0;
  }
  if (sav[6] > 0) {
    unmet4_c = sav[6] - 1;
  } else {
    unmet4_c = 0;
  }
  if (sav[7] > 0) {
    unmet4_w = sav[7] - 1;
  } else {
    unmet4_w = 0;
  }
  fate_weapon = sav[8];
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

void luckget(unsigned int star, size_t kind) {
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
        std::cout << s_pstring_en[sw];
        break;
      case 2:
        std::cout << s_pname_en[sw];
        break;
      case 3:
        std::cout << s_pnameshort_en[sw];
        break;
      case 4:
        std::cout << s_perror_en[sw];
        break;
      case 5:
        std::cout << s_pvalue_en[sw];
        break;
      case 6:
        std::cout << s_pachieve_en[sw];
        break;
      case 7:
        std::cout << s_pdetails_en[sw];
        break;
      default: {
        std::cout << EN_E_13 << '\n' << CN_E_13 << '\n';
        error_code = 13;
        quit = true;
        full_quit_e();
      }
    }
  } else if (lang_status == 1) {
    switch (sq) {
      case 1:
        std::cout << s_pstring_cn[sw];
        break;
      case 2:
        std::cout << s_pname_cn[sw];
        break;
      case 3:
        std::cout << s_pnameshort_cn[sw];
        break;
      case 4:
        std::cout << s_perror_cn[sw];
        break;
      case 5:
        std::cout << s_pvalue_cn[sw];
        break;
      case 6:
        std::cout << s_pachieve_cn[sw];
        break;
      case 7:
        std::cout << s_pdetails_cn[sw];
        break;
      default: {
        std::cout << EN_E_13 << '\n' << CN_E_13 << '\n';
        error_code = 13;
        quit = true;
        full_quit_e();
      }
    }
  } else {
    std::cout << EN_E_12 << '\n' << CN_E_12 << '\n';
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
    return 1;
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
    return 1;
  }  // for weapons

  else {
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

  else if (wishes_number == -2) {
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
      return 1;
    } else if (cleanornot == -1) {
      cleanornot = 0;
      wishes_number = 0;
      return 1;
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
    return 1;
  }

  else if (wishes_number == -5) {
    int wishes_5_r = wishes_5();
    if (wishes_5_r == 1) {
      return 1;
    } else {
      return error_code;
    }
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
        return 1;
      } else if (fate_weapon > 2) {
        slash_n() lang_cout(1, 72);
        slash_nn() fate_weapon = 0;
        goto enter_fate_weapon;
      } else {
        fate_points = 0;
      }
      wishes_number = 0;
      return 1;
    }  // if available

    else {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
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
    return 1;
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
    return 1;
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
      return 1;
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
      return 3;
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
    return 1;
  }  // anim switch

  else if (wishes_number == -11) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
    }
    hash_gen();
    wishes_number = 0;
    return 1;
  }  // hash generator

  else if (wishes_number == -31) {
    if (chosen_banner == 5) {
      wishes_number = 0;
      lang_cout(1, 72);
      slash_n() return 1;
    }
    {
      int wishes_31_r = wishes_31();
      if (wishes_31_r == 1) {
        return 1;
      } else {
        wishes_number = 0;
        return 1;
      }
    }
  }  // manual settings

  else if (wishes_number == -63) {
    wishes_number = 0;
    is_s_mode = true;
    {
      int wishes_63_r = wishes_63();
      if (wishes_63_r == 1) {
        return 1;
      } else {
        return 3;
      }
    }
  }  // s_mode settings

  else if (wishes_number == -127) {
    wishes_number = 0;
    wishes_127();
    return 1;
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
      return 1;
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
    slash_n() return 1;
  }  // what? achievements

  else if (wishes_number < 1) {
    wishes_number = 0;
    lang_cout(1, 72);
    slash_n() return 1;
  }  // invalid settings

  else {
    head_print();
  }

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

  return 0;
}
