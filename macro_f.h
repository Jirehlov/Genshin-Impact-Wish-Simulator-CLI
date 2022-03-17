#ifndef MACRO_F_H
#define MACRO_F_H

#define slash_n() \
  { std::cout << '\n'; }

#define slash_nn() \
  { std::cout << "\n\n"; }

#define is_mode()                                  \
  {                                                \
    bool check = false;                            \
    if (d_item_n[kind] > 0) {                      \
      d_item_n[kind]--;                            \
    }                                              \
    for (size_t ikk = 0; ikk < MAX_ITEMS; ikk++) { \
      if (d_item_n[ikk] > 0) {                     \
        d_item_c = true;                           \
        check = true;                              \
        break;                                     \
      } else if (d_item_n[ikk] == 0) {             \
        d_item_c = false;                          \
      } else {                                     \
        lang_cout(4, 10);                          \
        slash_n() error_code = 10;                 \
        full_quit_f()                              \
      }                                            \
      if (check) {                                 \
        break;                                     \
      }                                            \
    }                                              \
  }  // do if is s mode
#define cin_error_by()                                                  \
  {                                                                     \
    slash_n() lang_cout(1, 11);                                         \
    slash_n() std::cin.clear();                                         \
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
  }
#define cin_error_by2()                                                 \
  {                                                                     \
    slash_n() lang_cout(1, 11);                                         \
    std::cout << "\n\n";                                                \
    std::cin.clear();                                                   \
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
  }
#define cin_error_by3()                                                 \
  {                                                                     \
    std::cout << '\n' << EN_S_72 << '\n' << CN_S_72 << "\n\n";          \
    std::cin.clear();                                                   \
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
  }
#define prog_p()                         \
  {                                      \
    std::cout << "\r";                   \
    lang_cout(1, 166);                   \
    std::cout << "(" << delay_r << "%)"; \
    delay_r++;                           \
  }
#define prog_g()                                                 \
  {                                                              \
    if (!y_print && y_prog) {                                    \
      if (wishes_number_r > 10000) {                             \
        if (delay_prog > 0) {                                    \
          delay_prog--;                                          \
        } else if (delay_prog == 0) {                            \
          delay_prog = wishes_number_r_t;                        \
          prog_p()                                               \
        } else {                                                 \
          lang_cout(4, 14);                                      \
          slash_n() error_code = 14;                             \
          full_quit_f()                                          \
        }                                                        \
      } else {                                                   \
        delay_prog = static_cast<signed long long int>(          \
            100.0 - static_cast<double>(wishes_number) * 100.0 / \
                        static_cast<double>(wishes_number_r));   \
        std::cout << "\r";                                       \
        lang_cout(1, 166);                                       \
        std::cout << "(" << delay_prog << "%)";                  \
      }                                                          \
    }                                                            \
  }
#define anim_lp()                                                             \
  {                                                                           \
    if (anim_number == 10) {                                                  \
      animkind[anim_loop] = kind;                                             \
      animlocation[anim_loop] = countx;                                       \
      animsublocation[anim_loop] =                                            \
          static_cast<size_t>(five_star_assurance_number) - 1;                \
      animsubsublocation[anim_loop] =                                         \
          static_cast<size_t>(four_star_assurance_number) - 1;                \
      anim_loop++;                                                            \
    } else if (anim_number == 1) {                                            \
      anim_kind = static_cast<size_t>(kind);                                  \
      anim_location = static_cast<size_t>(countx);                            \
      anim_sublocation = static_cast<size_t>(five_star_assurance_number) - 1; \
      anim_subsublocation =                                                   \
          static_cast<size_t>(four_star_assurance_number) - 1;                \
    } else {                                                                  \
      lang_cout(4, 16);                                                       \
      std::cout << "\n\n";                                                    \
      error_code = 16;                                                        \
    }                                                                         \
    if (star > star_max) {                                                    \
      star_max = star;                                                        \
    }                                                                         \
  }
#define full_quit_f()                                                   \
  {                                                                     \
    std::cin.clear();                                                   \
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
    full_q = std::cin.get();                                            \
    return error_code;                                                  \
  }
#endif
