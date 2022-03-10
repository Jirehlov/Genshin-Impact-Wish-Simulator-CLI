#ifndef MACRO_F_H
#define MACRO_F_H

#define luckcpy() {if ( luck > luckiest || countx_l < 11) {\
						luckiest = luck;\
						for (size_t templuck = 0; templuck < 10; templuck++) {\
							luckiestlocation[templuck] = lucklocation[templuck];\
							luckiestsublocation[templuck] = lucksublocation[templuck];\
							luckiestsubsublocation[templuck] = lucksubsublocation[templuck];\
							luckiestkind[templuck] = luckkind[templuck];\
						}\
					}\
				} // snapshot the luckiest moment
#define luckget() {for (size_t templuck = 0; templuck < 9; templuck++) {\
						lucklocation[templuck] = lucklocation[templuck + 1];\
						lucksublocation[templuck] = lucksublocation[templuck + 1];\
						lucksubsublocation[templuck] = lucksubsublocation[templuck + 1];\
						luckkind[templuck] = luckkind[templuck + 1];\
						luckstar[templuck] = luckstar[templuck + 1];\
					}\
					countx_l ++;\
					lucklocation[9] = countx;\
					lucksublocation[9] = static_cast<size_t> (five_star_assurance_number) - 1;\
					lucksubsublocation[9] = static_cast<size_t> (four_star_assurance_number) - 1;\
					luckkind[9] = kind;\
					luckstar[9] = star;\
					luck = 0;\
				} // get the recorded luckiest
#define is_mode() {bool check = false;\
					if (d_item_n[kind] > 0) { d_item_n[kind]--; }\
					for (size_t ikk = 0; ikk < 117; ikk++) {\
					if (d_item_n[ikk] > 0) { d_item_c = true; check = true; break; }\
					else if (d_item_n[ikk] == 0) { d_item_c = false; }\
					else { lang_cout(4, 10); std::cout << '\n'; error_code = 10; full_quit_f() }\
					if (check) { break; }\
					}\
				} // do if is s mode
#define set_pool_1_m(up_five_m,size_nup_four_c_m, nup_four_cgm) {\
					set_pool_1((up_five_m), (size_nup_four_c_m), tempg1, tempg5, (nup_four_cgm));\
				}
#define set_pool_3_m(size_nup_four_c_m, nup_four_cgm) {\
					set_pool_3((size_nup_four_c_m), tempg1, tempg5, tempg6, tempg7, (nup_four_cgm));\
				}
#define cin_error_by(){\
					std::cout << '\n';\
					lang_cout(1, 11);\
					std::cout << '\n';\
					std::cin.clear();\
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');\
				}
#define cin_error_by2(){\
					std::cout << '\n';\
					lang_cout(1, 11);\
					std::cout << "\n\n";\
					std::cin.clear();\
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');\
				}
#define cin_error_by3(){\
					std::cout << '\n' << EN_S_72 << '\n' << CN_S_72 << "\n\n";\
					std::cin.clear();\
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');\
				}
#define mpcheck(){if (countx == 2 ||\
					countx == 6 ||\
					countx == 30 ||\
					countx == 126 ||\
					countx == 8190 ||\
					countx == 131070 ||\
					countx == 524286 ||\
					countx == 2147483646 ||\
					countx == 2305843009213693950) { ach[7] = true; }\
				  if (countx == 20192977) { ach[9] = true; }\
				  if (countx == 157087284) { ach[10] = true; }\
				}
#define prog_p(){\
					std::cout << "\r"; lang_cout(1, 166); \
					std::cout << "(" << delay_r << "%)"; \
					delay_r++; \
				}
#define prog_g(){if (!y_print && y_prog) {\
					if (wishes_number_r > 10000){\
						if (delay_prog > 0) {\
							delay_prog--; \
						}\
						else if (delay_prog == 0)\
						{\
							delay_prog = wishes_number_r_t; \
							prog_p()\
						}\
						else\
						{\
							lang_cout(4, 14);\
							std::cout << '\n';\
							error_code = 14;\
							full_quit_f()\
						}\
					}\
					else {\
						delay_prog = static_cast<signed long long int>(100.0 - static_cast<double>(wishes_number) * 100.0 / static_cast<double>(wishes_number_r));\
						std::cout << "\r"; lang_cout(1, 166); \
						std::cout << "(" << delay_prog << "%)"; \
					}\
				}\
				}
#define anim_lp(){if (anim_number == 10) {\
					animkind[anim_loop] = kind;\
					animlocation[anim_loop] = countx;\
					animsublocation[anim_loop] = static_cast<size_t> (five_star_assurance_number) - 1;\
					animsubsublocation[anim_loop] = static_cast<size_t> (four_star_assurance_number) - 1;\
					anim_loop++;\
				}\
				else if (anim_number == 1) {\
					anim_kind = static_cast<size_t> (kind);\
					anim_location = static_cast<size_t> (countx);\
					anim_sublocation = static_cast<size_t> (five_star_assurance_number) - 1;\
					anim_subsublocation = static_cast<size_t> (four_star_assurance_number) - 1;\
				}\
				else {\
					lang_cout(4, 16);\
					std::cout << "\n\n";\
					error_code = 16;\
				}\
				if (star > star_max) { star_max = star; }\
				}
#define full_quit_f(){\
				std::cin.clear();\
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');\
				full_q = std::cin.get();\
				return error_code;\
}
#define full_quit_e(){\
				std::cin.clear(); \
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
				full_q = std::cin.get(); \
				std::exit(error_code); \
}
#endif
