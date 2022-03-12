## English

This is a CLI Wish Simulator for Genshin Impact players.

### Features:

Unlimited number of wishes in one go;\
Pull untill a specific output reached;\
Statistics;\
Showing the luckiest succession of 10 wishes

### How to build:
For Windows x64 users, there're executables [available](https://github.com/Jirehlov/Genshin-Impact-Wish-Simulator-CLI/releases) now.\
You can also build by yourself:

```
g++ -s -o3 main.cpp functions.cpp variables.cpp lib/giwscli.cpp lib/random_gen.cpp -o giwscli
```
Or Visual Studio, etc.

### How to use:

```
giwscli <chosen_banner> <chosen_event> <wishes_number> <language>
```
For exmaple, if you want to pull 100 wishes in Sparkling Steps/20201020-20201110 which is a Character Event Wish and the exported text to be in English, type:
```
giwscli 1 2 100 0
```
where 0 for English and 1 for Chinese.\
If language option is not provided, the program will ask the user about the language.\
If no argument is provided, the program will enter interactive mode.

No. of banners and events seen as follows:

I Character Event Wish\
1: Ballad in Goblets/20200928-20201018 (Venti, Barbara, Fischl, Xiangling)\
2: Sparkling Steps/20201020-20201110 (Klee, Xingqiu, Noelle, Sucrose)\
3: Farewell of Snezhnaya/20201111-20201201 (Tartaglia, Diona, Beidou, Ningguang)\
4: Gentry of Hermitage/20201201-20201222 (Zhongli, Xinyan, Razor, Chongyun)\
5: Secretum Secretorum/20201223-20210112 (Albedo, Fischl, Sucrose, Bennett)\
6: Adrift in the Harbor/20210112-20210202 (Ganyu, Xiangling, Xingqiu, Noelle)\
7: Invitation to Mundane Life/20210203-20210217 (Xiao, Diona, Beidou, Xinyan)\
8: Dance of Lanterns/20210217-20210302 (Keqing, Ningguang, Bennett, Barbara)\
9: Moment of Bloom/20210302-20210316 (Hu Tao, Xingqiu, Xiangling, Chongyun)\
10: Ballad in Goblets/20210317-20210406 (Venti, Sucrose, Razor, Noelle)\
11: Farewell of Snezhnaya/20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)\
12: Gentry of Hermitage/20210428-20210518 (Zhongli, Yanfei, Noelle, Diona)\
13: Born of Ocean Swell/20210518-20210608 (Eula, Xinyan, Xingqiu, Beidou)\
14: Sparkling Steps/20210609-20210629 (Klee, Sucrose, Fischl, Barbara)\
15: Leaves in the Wind/20210629-20210720 (Kaedehara Kazuha, Rosaria, Bennett, Razor)\
16: The Heron's Court/20210721-20210810 (Kamisato Ayaka, Yanfei, Ningguang, Chongyun)\
17: Tapestry of Golden Flames/20210810-20210831 (Yoimiya, Sayu, Diona, Xinyan)\
18: Reign of Serenity/20210901-20210921 (Raiden Shogun, Kujo Sara, Xiangling, Sucrose)\
19: Drifting Luminescence/20210921-20211012 (Sangonomiya Kokomi, Rosaria, Beidou, Xingqiu)\
20: Farewell of Snezhnaya/20211013-20211102 (Tartaglia, Ningguang, Chongyun, Yanfei)\
21: Moment of Bloom/20211102-20211123 (Hu Tao, Thoma, Diona, Sayu)\
22: Secretum Secretorum/20211124-20211214 (Albedo, Rosaria, Noelle, Bennett)\
23: Oni's Royale/20211214-20220104 (Arataki Itto, Gorou, Xiangling, Barbara)\
24: The Transcendent One Returns/20220105-20220125 (Shenhe, Yun Jin, Ningguang, Chongyun)\
25: Gentry of Hermitage/20220125-20220215 (Zhongli, Yanfei, Xingqiu, Beidou)\
26: Everbloom Violet/20220216-20220308 (Yae Miko, Fischl, Diona, Thoma)\
27: Reign of Serenity/20220308-20220329 (Raiden Shogun, Bennett, Xinyan, Kujo Sara)

II Character Event Wish-2\
1: Born of Ocean Swell/20211124-20211214 (Eula, Rosaria, Noelle, Bennett)\
2: Invitation to Mundane Life/20220105-20220125 (Xiao, Yun Jin, Ningguang, Chongyun)\
3: Adrift in the Harbor/20220125-20220215 (Ganyu, Yanfei, Xingqiu, Beidou)\
4: Drifting Luminescence/20220308-20220329 (Sangonomiya Kokomi, Bennett, Xinyan, Kujo Sara)

III Weapon Event Wish\
1: Epitome Invocation/20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)\
2: Epitome Invocation/20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)\
3: Epitome Invocation/20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance, The Flute)\
4: Epitome Invocation/20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)\
5: Epitome Invocation/20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Sacrificial Fragments, The Stringless)\
6: Epitome Invocation/20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)\
7: Epitome Invocation/20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)\
8: Epitome Invocation/20210223-20210316 (Staff of Homa, Wolf's Gravestone, Lithic Blade, Lithic Spear, Sacrificial Bow, The Widsith, Lion's Roar)\
9: Epitome Invocation/20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)\
10: Epitome Invocation/20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)\
11: Epitome Invocation/20210428-20210518 (Summit Shaper, Memory of Dust, The Flute, Lithic Blade, Lithic Spear, Eye of Perception, Sacrificial Bow)\
12: Epitome Invocation/20210518-20210608 (Song of Broken Pines, Aquila Favonia, Sacrificial Sword, Rainslasher, Dragon's Bane, Sacrificial Fragments, Rust)\
13: Epitome Invocation/20210609-20210629 (Skyward Pride, Lost Prayer to the Sacred Winds, Mitternachts Waltz, Lion's Roar, The Bell, Favonius Lance, The Widsith)\
14: Epitome Invocation/20210629-20210720 (Freedom-Sworn, Skyward Atlas, The Alley Flash, Wine and Song, Alley Hunter, Favonius Greatsword, Dragon's Bane)\
15: Epitome Invocation/20210721-20210810 (Mistsplitter Reforged, Skyward Spine, The Stringless, Favonius Sword, Favonius Lance, Favonius Codex, Sacrificial Greatsword)\
16: Epitome Invocation/20210810-20210831 (Thundering Pulse, Skyward Blade, Favonius Warbow, Sacrificial Sword, Dragon's Bane, Rainslasher, Sacrificial Fragments)\
17: Epitome Invocation/20210901-20210921 (Engulfing Lightning, The Unforged, Sacrificial Bow, Lion's Roar, The Widsith, Favonius Lance, The Bell)\
18: Epitome Invocation/20210921-20211012 (Everlasting Moonglow, Primordial Jade Cutter, The Flute, Favonius Greatsword, Dragon's Bane, Favonius Codex, The Stringless)\
19: Epitome Invocation/20211013-20211102 (Polar Star, Memory of Dust, Akuoumaru, Favonius Sword, Favonius Lance, Eye of Perception, Rust)\
20: Epitome Invocation/20211102-20211123 (Staff of Homa, Elegy for the End, Wavebreaker's Fin, Mouun's Moon, Sacrificial Sword, Rainslasher, The Widsith)\
21: Epitome Invocation/20211124-20211214 (Freedom Sworn, Song of Broken Pines, Alley Hunter, Lion's Roar, Dragon's Bane, Wine and Song, Sacrificial Greatsword)\
22: Epitome Invocation/20211214-20210104 (Redhorn Stonethresher, Skyward Harp, The Alley Flash, Mitternachts Waltz, Favonius Lance, Sacrificial Fragments, The Bell)\
23: Epitome Invocation/20220105-20220125 (Calamity Queller, Primordial Jade Winged-Spear, Lithic Spear, The Flute, Favonius Warbow, The Widsith, Favonius Greatsword)\
24: Epitome Invocation/20220125-20220215 (Vortex Vanquisher, Amos' Bow, Lithic Blade, Favonius Sword, Dragon's Bane, Favonius Codex, Sacrificial Bow)\
25: Epitome Invocation/20220216-20220308 (Kagura's Verity, Primordial Jade Cutter, Wavebreaker's Fin, Stringless, Sacrificial Sword, Eye of Perception, Rainslasher)\
26: Epitome Invocation/20220308-20220329 (Engulfing Lightning, Everlasting Moonglow, Akuoumaru, Mouun's Moon, Dragon's Bane, Favonius Lance, Sacrificial Fragments)

IV Permanent Wish\
1: Wanderlust Invocation/20200928-20201222 (Released)\
2: Wanderlust Invocation/20201223-20210427 (Adds Diona and Xinyan)\
3: Wanderlust Invocation/20210428-20210608 (Adds Rosaria)\
4: Wanderlust Invocation/20210609-20210901 (Adds Yanfei)\
5: Wanderlust Invocation/20210901-20211012 (Adds Sayu)\
6: Wanderlust Invocation/20211013-20211123 (Adds Kujo Sara)\
7: Wanderlust Invocation/20211124-20220104 (Adds Thoma)\
8: Wanderlust Invocation/20220105-20220215 (Adds Gorou)\
9: Wanderlust Invocation/20220216- (Adds Yun Jin)

V Novice Wish\
1: Beginners' wish

### Screenshots


![Screenshot 2022-03-05 074401](https://user-images.githubusercontent.com/34600796/156873892-17f3fe23-f6de-45ff-a12e-24757c7220fa.png)



### About Hidden Possibilities

This simulator includes no hidden possibilities.
