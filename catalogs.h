/* aGotino catalog.h
 *  
 *  Contains Messier objects and aGotino Star List
 * 
 *  Copy this file in Arduino/libraries/aGotino and restart the IDE
 */
#include <avr/pgmspace.h>

typedef struct {
     long ra, dec;
}  RaDec; // contains Ra and Dec in secs Epoch J2000  // 8 byte

/* Messier Catalog
 *  Source: Wikipedia https://en.wikipedia.org/wiki/Messier_object
 */

const RaDec Messier[] PROGMEM = {
{0,0},          // Dummy so M[n] is Mn
{20071,79252},  // M1 05h 34m 31.94s +22° 00′ 52.2″
{77607,-2964},  // M2 21h 33m 27.02s −00° 49′ 24″
{49331,102158}, // M3 13h 42m 11.62s +28° 22′ 38.2″
{59015,-95492}, // M4 16h 23m 35.22s −26° 31′ 32.7″
{55113,7491},   // M5 15h 18m 33.22s +02° 04′ 51.7″
{63600,-115980},// M6 17h 40.1m −32° 13′
{64431,-125254},// M7 17h 53m 51.2s −34° 47′ 34″
{65017,-87792}, // M8 18h 03m 37s −24° 23′ 12″
{62351,-66658}, // M9 17h 19m 11.78s −18° 30′ 58.5″
{61029,-14758}, // M10 16h 57m 8.92s −04° 05′ 58.07″
{67866,-22560}, // M11 18h 51.1m −06° 16′
{60434,-7015},  // M12 16h 47m 14.18s −01° 56′ 55″
{60101,131255}, // M13 16h 41m 41.24s +36° 27′ 35.5″
{63456,-11685}, // M14 17h 37m 36.15s −03° 14′ 45.3″
{77398,43801},  // M15 21h 29m 58.33s +12° 10′ 01.2″
{65928,-49740}, // M16 18h 18m 48s −13° 49′
{66026,-58236}, // M17 18h 20m 26s −16° 10′ 36″
{65994,-61680}, // M18 18h 19.9m −17° 08′
{61357,-94565}, // M19 17h 02m 37.69s −26° 16′ 05″
{64943,-82908}, // M20 18h 02m 23s −23° 01′ 48″
{65076,-81000}, // M21 18h 04.6m −22° 30′
{66983,-86057}, // M22 18h 36m 23.94s −23° 54′ 17.1″
{64608,-68460}, // M23 17h 56.8m −19° 01′
{65820,-66780}, // M24 18h 17m −18° 33′
{66696,-69300}, // M25 18h 31.6m −19° 15′
{67512,-33840}, // M26 18h 45.2m −09° 24′
{71976,81796},  // M27 19h 59m 36.340s +22° 43′ 16.09″
{66272,-89531}, // M28 18h 24m 32.89s −24° 52′ 11.4″
{73436,138684}, // M29 20h 23m 56s +38° 31′ 24″
{78022,-83447}, // M30 21h 40m 22.12 −23° 10′ 47.5″
{2564,148569},  // M31 00h 42m 44.3s +41° 16′ 09″
{2561,147115},  // M32 00h 42m 41.8s +40° 51′ 55″
{5630,110377},  // M33 01h 33m 50.02s +30° 39′ 37″
{9726,153960},  // M34 02h 42.1m +42° 46′
{22146,87660},  // M35 06h 09.1m +24° 21′
{20172,122884}, // M36 05h 36m 12s +34° 08′ 04″
{21138,117182}, // M37 05h 52m 18s +32° 33′ 02″
{19722,129078}, // M38 05h 28m 42s +35° 51′ 18″
{77502,174360}, // M39 21h 31m 42s +48° 26′ 00″
{44532,209099}, // M40 12h 22m 12.5s +58° 04′ 59″
{24360,-74760}, // M41 06h 46.0m −20° 46′
{20117,-19408}, // M42 05h 35m 17.3 −05° 23′ 28″
{20136,-18960}, // M43 05h 35.6m −05° 16′
{31224,71940},  // M44 08h 40.4m +19° 59′
{13644,86820},  // M45 03h 47m 24s +24° 07′ 00″
{27708,-53340}, // M46 07h 41.8m −14° 49′
{27396,-52200}, // M47 07h 36.6m −14° 30′
{29622,-20700}, // M48 08h 13.7m −05° 45′
{44986,28802},  // M49 12h 29m 46.7s +08° 00′ 02″
{25392,-30000}, // M50 07h 03.2m −08° 20′
{48592,169903}, // M51 13h 29m 52.7s +47° 11′ 43″
{84252,221700}, // M52 23h 24.2m +61° 35′
{47575,65405},  // M53 13h 12m 55.25s +18° 10′ 05.4″
{68103,-109727},// M54 18h 55m 03.33s −30° 28′ 47.5″
{70799,-111473},// M55 19h 39m 59.71s −30° 57′ 53.1″
{69395,108660}, // M56 19h 16m 35.57s +30° 11′ 00.5″
{68015,118905}, // M57 18h 53m 35.079s +33° 01′ 45.03″
{45463,42545},  // M58 12h 37m 43.5s +11° 49′ 05″
{45722,41929},  // M59 12h 42m 02.3s +11° 38′ 49″
{45819,41589},  // M60 12h 43m 39.6s +11° 33′ 09″
{44514,16105},  // M61 12h 21m 54.9s +04° 28′ 25″
{61272,-108404},// M62 17h 01m 12.60s −30° 06′ 44.5″
{47749,151305}, // M63 13h 15m 49.3s +42° 01′ 45″
{46603,78058},  // M64 12h 56m 43.7s +21° 40′ 58″
{40735,47132},  // M65 11h 18m 55.9s +13° 05′ 32″
{40815,46770},  // M66 11h 20m 15.0s +12° 59′ 30″
{31878,42540},  // M67 08h 51.3m +11° 49′
{45567,-96279}, // M68 12h 39m 27.98s −26° 44′ 39″
{66683,-116453},// M69 18h 31m 23.10s −32° 20′ 53.1″
{67392,-116252},// M70 18h 43m 12.76s −32° 17′ 32″
{71626,67605},  // M71 19h 53m 46.49s +18° 46′ 45.1″
{75207,-45134}, // M72 20h 53m 27.70s −12° 32′ 14.3″
{75534,-45480}, // M73 20h 58m 54s −12° 38′
{5801,56821},   // M74 01h 36m 41.8s +15° 47′ 01″
{72364,-78916}, // M75 20h 06m 04.75s −21° 55′ 16.2″
{6144,185671},  // M76 01h 42.4m +51° 34′ 31″
{9760,-48},     // M77 02h 42m 40.7s −00° 00′ 48″
{20806,50},     // M78 05h 46m 46.7s +00° 00′ 50″
{19450,-88287}, // M79 05h 24m 10.59s −24° 31′ 27.3″
{58622,-82720}, // M80 16h 17m 02.41s −22° 58′ 40″
{35733,248635}, // M81 09h 55m 33.2s +69° 03′ 55″
{35752,250847}, // M82 09h 55m 52.2s +69° 40′ 47″
{49020,-107517},// M83 13h 37m 00.9s −29° 51′ 57″
{44703,46393},  // M84 12h 25m 03.7s +12° 53′ 13″
{44724,65488},  // M85 12h 25m 24.0s +18° 11′ 28″
{44771,46606},  // M86 12h 26m 11.7s +12° 56′ 46″
{45049,44608},  // M87 12h 30m 49.42338s +12° 23′ 28″
{45119,51914},  // M88 12h 31m 59.2s +14° 25′ 14″
{45339,45203},  // M89 12h 35m 39.8s +12° 33′ 23″
{45409,47386},  // M90 12h 36m 49.8s +13° 09′ 46″
{45326,52187},  // M91 12h 35m 26.4s +14° 29′ 47″
{62227,155289}, // M92 17h 17m 07.39s +43° 08′ 09.4″
{27876,-85920}, // M93 07h 44.6m −23° 52′
{46253,148034}, // M94 12h 50m 53.1s +41° 07′ 14″
{38637,42134},  // M95 10h 43m 57.7s +11° 42′ 14″
{38805,42552},  // M96 10h 46m 45.7s +11° 49′ 12″
{40487,198068}, // M97 11h 14m 47.734s +55° 01′ 08.50″
{44028,53642},  // M98 12h 13m 48.292s +14° 54′ 02″
{44329,51899},  // M99 12h 18m 49.6s +14° 24′ 59″
{44574,56961},  // M100 12h 22m 54.9s +15° 49′ 21″
{50592,195657}, // M101 14h 03m 12.6s +54° 20′ 57″
{54389,200748}, // M102 15h 06m 29.5s +55° 45′ 48″
{5592,218520},  // M103 01h 33.2m +60° 42′
{45599,-41843}, // M104 12h 39m 59.4s −11° 37′ 23″
{38869,45294},  // M105 10h 47m 49.6s +12° 34′ 54″
{44337,170294}, // M106 12h 18m 57.5s +47° 18′ 14″
{59551,-46994}, // M107 16h 32m 31.86s −13° 03′ 14″
{40291,200427}, // M108 11h 11m 31.0s +55° 40′ 27″
{43056,192148}, // M109 11h 57m 36.0s +53° 22′ 28″
{2422,150067}   // M110 00h 40m 22.1s +41° 41′ 07″
};

/* aGotino Star List
 *  Contains constellations Alpha, Beta and Gamma stars 
 *  with mag < 4 and the remaining stars with mag <3
 * Source: 
 *  BSC5P - Bright Star Catalog	https://heasarc.gsfc.nasa.gov/W3Browse/star-catalog/bsc5p.html
 *  Names from Kstars project https://edu.kde.org/kstars/ * 
 */

const RaDec Stars[] PROGMEM = {		
{0,324000},     // True North
{503,104726},	  // (1) And Alp	Alpheratz
{4184,128234},	// (2) And Bet	Mirach
{7434,152387},	// (3) And Gam	Almach
{53272,-284239},// (4) Aps Alp	
{59607,-277570},// (5) Aps Gam	
{71447,31926},	// (6) Aql Alp	Altair
{71719,23064},	// (7) Aql Bet	Alshain
{71176,38208},	// (8) Aql Gam	Tarazed
{68725,49908},	// (9) Aql Zet	
{79547,1151},	  // (10) Aqr Alp	Sadalmelik
{77494,-15944},	// (11) Aqr Bet	Sadalsud
{80499,-2206},	// (12) Aqr Gam	Sadachbia
{63111,-173246},// (13) Ara Alp	Tchou
{62718,-196092},// (14) Ara Bet	
{62724,-200241},// (15) Ara Gam	
{7630,84465},	  // (16) Ari Alp	Hamal
{6878,74909},	  // (17) Ari Bet	Sheratan
{19001,165593},	// (18) Aur Alp	Capella
{21572,161811},	// (19) Aur Bet	Menkalinan
{18118,157764},	// (20) Aur Eps	Maaz
{17820,119398},	// (21) Aur Iot	Kabdhilinan
{21583,133965},	// (22) Aur The	
{51340,69057},	// (23) Boo Alp	Arcturus
{54117,145406},	// (24) Boo Bet	Nekkar
{53099,97467},	// (25) Boo Eps	Pulcherrima
{50081,66232},	// (26) Boo Eta	Muphrid
{52325,137910},	// (27) Boo Gam	Seginus
{73083,-41239},	// (28) Cap Alp	Al Giedi
{73261,-47587},	// (29) Cap Bet	Dabih
{78422,-57142},	// (30) Cap Del	Deneb Algiedi
{78006,-55216},	// (31) Cap Gam	Nashira
{23037,-184695},	// (32) Car Alp	Canopus
{33192,-245818},	// (33) Car Bet	Miaplacidus
{30151,-210565},	// (34) Car Eps	Avior
{33425,-211409},	// (35) Car Iot	Aspidiske
{38577,-228980},	// (36) Car The	
{2431,203534},	// (37) Cas Alp	Schedar
{551,212939},	// (38) Cas Bet	Caph
{5149,216847},	// (39) Cas Del	Ruchbah
{3403,218580},	// (40) Cas Gam	Navi
{52776,-212993},	// (41) Cen Alp	Rigel Kentaurus
{50629,-214657},	// (42) Cen Bet	Hadar
{43702,-177399},	// (43) Cen Del	
{49193,-189121},	// (44) Cen Eps	
{52530,-150632},	// (45) Cen Eta	
{45691,-169345},	// (46) Cen Gam	
{48036,-127036},	// (47) Cen Iot	
{50801,-128268},	// (48) Cen The	Menkent
{50132,-168162},	// (49) Cen Zet	
{76715,225308},	// (50) Cep Alp	Alderamin
{77320,254019},	// (51) Cep Bet	Alphirk
{85161,279477},	// (52) Cep Gam	Er Rai
{10937,14723},	// (53) Cet Alp	Menkab
{2615,-57648},	// (54) Cet Bet	Diphda
{9798,11649},	// (55) Cet Gam	
{52950,-226889},	// (56) Cir Alp	
{24309,-55022},	// (57) CMa Alp	Sirius
{22962,-57759},	// (58) CMa Bet	Mirzam
{25704,-92184},	// (59) CMa Del	Wezen
{25118,-97300},	// (60) CMa Eps	Adhara
{26646,-103309},	// (61) CMa Eta	Aludra
{27558,18810},	// (62) CMi Alp	Procyon
{26829,29842},	// (63) CMi Bet	Gomeisa
{29791,33068},	// (64) Cnc Bet	Tarf
{20379,-122133},	// (65) Col Alp	Phakt
{21058,-123234},	// (66) Col Bet	Wazn
{56081,96173},	// (67) CrB Alp	Alphecca
{55670,104781},	// (68) CrB Bet	Nusakan
{56565,94664},	// (69) CrB Gam	
{44796,-226443},	// (70) Cru Alp	Acrux
{46063,-209921},	// (71) Cru Bet	Mimosa
{44109,-206104},	// (72) Cru Del	
{45070,-204792},	// (73) Cru Gam	Gacrux
{45263,-81372},	// (74) Crv Bet	Kraz
{44992,-55744},	// (75) Crv Del	Algorab
{44148,-59249},	// (76) Crv Gam	Gienah Corvi
{46562,137946},	// (77) CVn Alp	Cor Caroli
{74486,163009},	// (78) Cyg Alp	Deneb
{70243,100655},	// (79) Cyg Bet	Albireo
{71099,162471},	// (80) Cyg Del	
{74773,122293},	// (81) Cyg Eps	Gienah
{73334,144924},	// (82) Cyg Gam	Sadr
{74378,57283},	// (83) Del Alp	Svalocin
{74253,52543},	// (84) Del Bet	Rotanev
{16440,-197838},	// (85) Dor Alp	
{20018,-221437},	// (86) Dor Bet	
{50663,231753},	// (87) Dra Alp	Thuban
{63026,188285},	// (88) Dra Bet	Rastaban
{59040,221451},	// (89) Dra Eta	
{64596,185360},	// (90) Dra Gam	Eltanin
{76549,18892},	// (91) Equ Alp	Kitalpha
{5863,-204348},	// (92) Eri Alp	Achernar
{18471,-17689},	// (93) Eri Bet	Cursa
{14282,-44969},	// (94) Eri Gam	Zaurak
{11524,-97247},	// (95) For Alp	
{27276,114798},	// (96) Gem Alp	Castor
{27919,100894},	// (97) Gem Bet	Pollux
{24236,90472},	// (98) Gem Eps	Mebsuta
{23863,59037},	// (99) Gem Gam	Alhena
{22978,81049},	// (100) Gem Mu 	Tejat
{79694,-162140},	// (101) Gru Alp	Al Na'ir
{81760,-162415},	// (102) Gru Bet	
{78836,-131886},	// (103) Gru Gam	Al Dhanab
{62079,51805},	// (104) Her Alp	Ras Algethi
{59413,77363},	// (105) Her Bet	Kornephoros
{58915,68951},	// (106) Her Gam	
{60077,113771},	// (107) Her Zet	
{15240,-150140},	// (108) Hor Alp	
{34055,-26429},	// (109) Hya Alp	Alphard
{47935,-82182},	// (110) Hya Gam	
{7126,-217549},	// (111) Hyi Alp	
{1545,-276285},	// (112) Hyi Bet	
{13634,-265540},	// (113) Hyi Gam	
{74254,-168151},	// (114) Ind Alp	Al Nair
{75289,-207165},	// (115) Ind Bet	
{81078,181017},	// (116) Lac Alp	
{36502,43082},	// (117) Leo Alp	Regulus
{42544,52459},	// (118) Leo Bet	Denebola
{40447,73885},	// (119) Leo Del	Zozma
{35151,85587},	// (120) Leo Eps	
{37198,71430},	// (121) Leo Gam	Al Gieba
{19964,-58240},	// (122) Lep Alp	Arneb
{19695,-69266},	// (123) Lep Bet	Nihal
{20668,-77586},	// (124) Lep Gam	
{53453,-57450},	// (125) Lib Alp	Zuben El Genubi
{55020,-31021},	// (126) Lib Bet	Zuben el Chamal
{56132,-47558},	// (127) Lib Gam	Zuben el Hakrab
{52916,-167802},	// (128) Lup Alp	Men
{53912,-154318},	// (129) Lup Bet	
{56109,-146999},	// (130) Lup Gam	
{33663,123813},	// (131) Lyn Alp	
{67016,139621},	// (132) Lyr Alp	Vega
{67805,120106},	// (133) Lyr Bet	Sheliak
{68337,117682},	// (134) Lyr Gam	Sulaphat
{27675,-30416},	// (135) Mon Alp	
{22491,-20611},	// (136) Mon Gam	
{45431,-247912},	// (137) Mus Alp	
{45977,-244411},	// (138) Mus Bet	
{45148,-258721},	// (139) Mus Gam	
{63296,45216},	// (140) Oph Alp	Rasalhague
{63808,16442},	// (141) Oph Bet	Kelb al Rai
{58461,-8300},	// (142) Oph Del	Yed Prior
{61823,-51391},	// (143) Oph Eta	
{64074,9746},	// (144) Oph Gam	
{59830,-33958},	// (145) Oph Zet	
{21310,26665},	// (146) Ori Alp	Betelgeuse
{18872,-28074},	// (147) Ori Bet	Rigel
{19920,1077},	// (148) Ori Del	Mintaka
{20173,-2873},	// (149) Ori Eps	Alnilam
{19508,22859},	// (150) Ori Gam	Bellatrix
{20126,-14724},	// (151) Ori Iot	Na'ir al Saif
{20865,-29989},	// (152) Ori Kap	Saiph
{20446,-206},	// (153) Ori Zet	Alnitak
{73539,-198954},	// (154) Pav Alp	Peacock
{74698,-236869},	// (155) Pav Bet	
{83086,54739},	// (156) Peg Alp	Markab
{83027,101098},	// (157) Peg Bet	Scheat
{78251,35550},	// (158) Peg Eps	Enif
{81780,108797},	// (159) Peg Eta	Matar
{794,54661},	// (160) Peg Gam	Algenib
{12259,179500},	// (161) Per Alp	Mirfak
{11290,147440},	// (162) Per Bet	Algol
{14271,144037},	// (163) Per Eps	
{11088,192623},	// (164) Per Gam	
{14048,114781},	// (165) Per Zet	Atik
{1577,-150098},	// (166) Phe Alp	Ankaa
{3965,-163013},	// (167) Phe Bet	
{5302,-153654},	// (168) Phe Gam	
{24491,-216211},	// (169) Pic Alp	
{20837,-183361},	// (170) Pic Bet	
{82659,-102160},	// (171) PsA Alp	Fomalhaut
{83830,11816},	// (172) Psc Gam	
{26229,-132849},	// (173) Pup Pi 	
{29253,-85305},	// (174) Pup Rho	
{24596,-177787},	// (175) Pup Tau	
{29015,-143988},	// (176) Pup Zet	Naos
{31416,-118129},	// (177) Pyx Alp	
{31206,-124890},	// (178) Pyx Bet	
{15266,-221494},	// (179) Ret Alp	
{13452,-227495},	// (180) Ret Bet	
{59364,-92045},	// (181) Sco Alp	Antares
{57926,-65500},	// (182) Sco Bet	Graffias
{57620,-76962},	// (183) Sco Del	Dschubba
{60610,-121344},	// (184) Sco Eps	
{63749,-140292},	// (185) Sco Kap	
{63217,-132826},	// (186) Sco Lam	Shaula
{57531,-93189},	// (187) Sco Pi 	
{58871,-87866},	// (188) Sco Sig	Al Niyat
{59753,-100022},	// (189) Sco Tau	
{63439,-147608},	// (190) Sco The	Sargas
{63046,-132135},	// (191) Sco Ups	Lesath
{66912,-27921},	// (192) Sct Alp	
{56656,23132},	// (193) Ser Alp	Unukalhai
{56771,55519},	// (194) Ser Bet	Chow
{57387,56382},	// (195) Ser Gam	
{71925,70172},	// (196) Sge Gam	
{69833,-141782},	// (197) Sgr Alp	
{66060,-101419},	// (198) Sgr Del	Kaus Media
{66250,-121015},	// (199) Sgr Eps	Kaus Australis
{65149,-106473},	// (200) Sgr Gam	Al Nasl
{66478,-88482},	// (201) Sgr Lam	Kaus Borealis
{68986,-75515},	// (202) Sgr Pi 	
{68116,-92532},	// (203) Sgr Sig	Nunki
{68557,-101231},	// (204) Sgr Zet	
{16555,59433},	// (205) Tau Alp	Aldebaran
{19578,102987},	// (206) Tau Bet	Alnath
{13649,86778},	// (207) Tau Eta	Alcyone
{15588,56259},	// (208) Tau Gam	Primus Hyadum
{66418,-158514},	// (209) Tel Alp	
{60520,-248300},	// (210) TrA Alp	
{57309,-225250},	// (211) TrA Bet	
{55135,-242354},	// (212) TrA Gam	
{6785,106484},	// (213) Tri Alp	Mothallah
{7773,125954},	// (214) Tri Bet	
{1446,-258907},	// (215) Tuc 47	
{80310,-215065},	// (216) Tuc Alp	
{83846,-207951},	// (217) Tuc Gam	
{39824,222303},	// (218) UMa Alp	Dubhe
{39711,202977},	// (219) UMa Bet	Merak
{46442,201455},	// (220) UMa Eps	Alioth
{49652,177528},	// (221) UMa Eta	Alkaid
{42830,193301},	// (222) UMa Gam	Phecda
{48236,197731},	// (223) UMa Zet	Mizar
{9109,321351},	// (224) UMi Alp	Polaris
{53442,266960},	// (225) UMi Bet	Kocab
{55244,258602},	// (226) UMi Gam	Pherkab
{31482,-191850},// (227) Vel Del	
{29372,-167988},// (228) Vel Gam	Regor
{33727,-197961},// (229) Vel Kap	Merkab
{32880,-153243},// (230) Vel Lam	Suhail
{38806,-174888},// (231) Vel Mu 	
{48312,-39019},	// (232) Vir Alp	Spica
{42642,6353},	  // (233) Vir Bet	Zawijah
{46931,39453},	// (234) Vir Eps	Vindemiatrix
{45700,-1982},	// (235) Vir Gam	
{32547,-236174},// (236) Vol Alp	
{30344,-237107},// (237) Vol Bet
{25725,-250204}	// (238) Vol Gam	
};

/* ideas
typedef struct {
   int  con;
   char bd[3];  
   long ra, dec;
}  Star; // sorted by con, bd

char cos[] = { "And","Aps","Aql",... }

const Star Stars[] PROGMEM = {		
 {1, 'Alp', 503,104726},     // Alpha And
 ...
 ...
}

typedef struct {
   long id;
   long ra, dec;
}  NGC; // sorted by id

const NGC NGCs[] PROGMEM = {		
 {123, 503,104726},     // Alpha And
 ...
 ...
}


*/
