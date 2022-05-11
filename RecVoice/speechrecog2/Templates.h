const byte nUtterances = 10;
const byte nSegments = 13;
const byte SubShifts = 4;
const byte MaxShift = 6;
const struct TTemplate { int mean,sd; } Templates[nUtterances][nSegments][nBand+1] PROGMEM =
{
  { // un
    {{59,674},{184,1164},{236,1344},{171,793},{85,792}},
    {{59,625},{207,994},{254,1822},{174,1381},{89,927}},
    {{48,477},{136,1074},{189,736},{126,747},{61,382}},
    {{16,455},{47,1127},{70,1164},{46,836},{22,282}},
    {{0,70},{10,535},{12,437},{9,288},{8,246}},
    {{0,0},{7,279},{9,314},{8,208},{10,313}},
    {{0,32},{7,204},{10,330},{9,213},{10,305}},
    {{0,0},{7,257},{10,327},{8,132},{9,217}},
    {{0,0},{8,245},{10,343},{9,184},{10,212}},
    {{0,42},{10,783},{10,420},{9,264},{9,200}},
    {{0,0},{7,222},{10,300},{9,173},{10,258}},
    {{0,42},{6,215},{9,326},{8,116},{9,232}},
    {{0,63},{5,230},{7,258},{7,212},{7,254}}
  },
  { // deux
    {{48,1602},{212,1570},{255,2856},{132,1186},{70,692}},
    {{52,782},{236,3598},{330,2742},{172,1247},{81,788}},
    {{44,428},{141,670},{207,1168},{111,779},{54,595}},
    {{10,522},{43,911},{59,1289},{31,606},{18,285}},
    {{1,157},{8,327},{11,275},{9,152},{10,191}},
    {{0,0},{6,244},{8,125},{7,184},{8,160}},
    {{0,0},{6,249},{7,237},{8,207},{8,193}},
    {{0,32},{6,280},{8,331},{7,195},{7,189}},
    {{0,0},{6,245},{8,310},{8,241},{9,258}},
    {{0,32},{6,207},{8,299},{10,217},{10,262}},
    {{0,0},{6,226},{9,199},{9,232},{10,211}},
    {{0,0},{6,255},{8,259},{8,226},{10,320}},
    {{0,32},{6,387},{9,389},{8,263},{9,263}}
  },
  { // trois
    {{34,1585},{69,1630},{69,1458},{47,1177},{33,821}},
    {{23,760},{83,1338},{99,850},{59,604},{31,413}},
    {{32,937},{130,1662},{167,3193},{108,2118},{52,1044}},
    {{59,1123},{146,2314},{199,1282},{181,1287},{83,263}},
    {{59,772},{96,771},{124,1010},{153,990},{71,574}},
    {{20,396},{37,478},{49,617},{54,699},{28,327}},
    {{1,92},{12,1403},{13,647},{12,347},{8,201}},
    {{0,0},{9,977},{8,333},{6,222},{6,278}},
    {{0,0},{6,264},{7,260},{6,204},{7,241}},
    {{0,0},{6,256},{8,212},{6,189},{7,195}},
    {{0,97},{6,262},{8,264},{8,288},{8,278}},
    {{0,32},{5,211},{6,151},{6,145},{7,185}},
    {{0,0},{2,125},{4,145},{4,74},{4,70}} 
  }
};

const char sUtterance_0[] PROGMEM = "un";
const char sUtterance_1[] PROGMEM = "deux";
const char sUtterance_2[] PROGMEM = "trois";
const char *const sUtterances[] PROGMEM = {sUtterance_0,sUtterance_1,sUtterance_2};
