#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "var myEnv = lsc;\n"
                        "var phase = null;\n"
                        "function setPhase(ph) {\n"
                        " phase = ph;\n"
                        "}\n"
                        "\n"
                        "var winPhase = {};\n"
                        "function setWin(tbl, ph) {\n"
                        " winPhase[tbl] = ph;\n"
                        "}\n"
                        "\n"
                        "var clsd = false;\n"
                        "function c(cod, ph, tbl, its, flds, key, com) {\n"
                        " LS_window.LS_w(cod, ph, tbl, its, flds, key, com);\n"
                        "}\n"
                        "\n"
                        "function error(cod, ph, tbl, msg) {\n"
                        " if (tbl != null) {\n"
                        "  LS_window.LS_l(cod, ph, tbl, msg);\n"
                        " } else {\n"
                        "  LS_window.LS_l(cod, phase, null, msg);\n"
                        " }\n"
                        "}\n"
                        "\n"
                        "function start(sID, addr, kaMs, reqLim, srv, ip) {\n"
                        " LS_window.LS_e(1, phase, sID, addr, kaMs, reqLim, srv, ip);\n"
                        "}\n"
                        "\n"
                        "function end(cause) {\n"
                        " LS_window.LS_e(4, phase, cause);\n"
                        "}\n"
                        "\n"
                        "function loop(holdMs) {\n"
                        " LS_window.LS_e(2, phase, holdMs);\n"
                        "}\n"
                        "\n"
                        "function retry() {\n"
                        " LS_window.LS_e(3, phase);\n"
                        "}\n"
                        "\n"
                        "function bw(maxBW) {\n"
                        " LS_window.LS_e(5, phase, maxBW);\n"
                        "}\n"
                        "\n"
                        "function y(secs) {\n"
                        " LS_window.LS_s(phase, secs);\n"
                        "}\n"
                        "\n"
                        "var unchangedSignal = {};\n"
                        "unchangedSignal.length = -1;\n"
                        "function convert(b, f) {\n"
                        "  var a, c, d = f, e = [];\n"
                        "  for(a = 0;a < b.length;a++) {\n"
                        "    if(a < f) {\n"
                        "      e[a] = b[a]\n"
                        "    } else {\n"
                        "      if(b[a].charAt) {\n"
                        "        b[a] == '$' ? e[d] = '' : b[a] == '#' ? e[d] = null : (c = b[a].charAt(0"
                        "), e[d] = c == '$' || c == '#' ? b[a].substring(1) : b[a]), d++\n"
                        "      } else {\n"
                        "        for(c = 0;c < b[a];c++) {\n"
                        "          e[d] = unchangedSignal, d++\n"
                        "        }\n"
                        "      }\n"
                        "    }\n"
                        "  }\n"
                        "  return e;\n"
                        "}\n"
                        "function d(tbl) {\n"
                        " try { LS_window.LS_u(winPhase[tbl], convert(d.arguments || arguments, 2)); } ca"
                        "tch(exc) {}\n"
                        "}\n"
                        "function z(tbl) {\n"
                        " LS_window.LS_v(winPhase[tbl], convert(z.arguments || arguments, 2));\n"
                        "}\n"
                        "function n(tbl) {\n"
                        " LS_window.LS_n(winPhase[tbl], n.arguments || arguments);\n"
                        "}\n"
                        "function s(tbl) {\n"
                        " LS_window.LS_s(winPhase[tbl], s.arguments || arguments);\n"
                        "}\n"
                        "function r(tbl) {\n"
                        " LS_window.LS_o(winPhase[tbl], r.arguments || arguments);\n"
                        "}\n"
                        "function p() {\n"
                        " LS_window.LS_u(phase, p.arguments || arguments);\n"
                        "}\n"
                        "myEnv.setPhase = setPhase;\n"
                        "myEnv.setWin = setWin;\n"
                        "myEnv.c = c;\n"
                        "myEnv.error = error;\n"
                        "myEnv.end = end;\n"
                        "myEnv.start = start;\n"
                        "myEnv.loop = loop;\n"
                        "myEnv.retry = retry;\n"
                        "myEnv.bw = bw;\n"
                        "myEnv.y = y;\n"
                        "myEnv.convert = convert;\n"
                        "myEnv.d = d;\n"
                        "myEnv.z = z;\n"
                        "myEnv.n = n;\n"
                        "myEnv.s = s;\n"
                        "myEnv.r = r;\n"
                        "myEnv.p = p;\n"
                        "myEnv.LS_window = LS_window;\n"
                        "\n"
                        "// END OF HEADER\n"
                        "\n"
                        "setPhase(8103);\n"
                        "start('Sa0ef0b3ea64989deT4929104', null, 5000, 50000);\n";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 2209 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "bw(0.0);\n";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 9 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "c(6,1,1,10,12,-1,-1);setWin(1,1);z(1,2,'Ations Europe','16.04','10:49:29','-0.31"
                        "','60500','16.04','16.07','47000','12.71','19.57','16.09','16.2');z(1,3,'Bagies "
                        "Consulting','7.2','10:49:29','0.13','73500','7.2','7.22','81500','5.8','8.64','7"
                        ".19','7.25');z(1,4,'BAY Corporation','3.58','10:49:13','-1.37','44500','3.58','3"
                        ".59','26500','3.28','4.12','3.63','3.62');z(1,5,'CON Consulting','8.76','10:49:2"
                        "6','15.11','90500','8.76','8.78','42500','6.08','9.11','7.61','7.65');z(1,6,'Cor"
                        "cor PLC','2.4','10:49:28','4.34','15000','2.4','2.41','1000','1.86','2.73','2.3'"
                        ",'2.3');z(1,7,'CVS Asia','14.21','10:49:27','-7.66','97500','14.17','14.21','535"
                        "00','12.56','18.47','15.39','15.85');z(1,8,'Datio PLC','4.93','10:49:26','-7.15'"
                        ",'96000','4.91','4.93','100000','4.37','6.3','5.31','5.31');z(1,9,'Dentems','5.0"
                        "2','10:49:29','3.29','66000','5.01','5.02','6500','4.01','5.79','4.86','4.97');z"
                        "(1,10,'ELE Manufacturing','8.07','10:49:14','6.04','6000','8.04','8.07','58000',"
                        "'6.25','8.94','7.61','7.7');z(1,1,'Anduct','2.88','10:49:14','-5.26','11500','2."
                        "88','2.89','63000','2.49','3.52','3.04','3.1');\n";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 1088 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive3[] = "d(1,7,1,'14.1','10:49:29','-8.38','45500','14.08','14.1','95000',4);\n";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	// (record-time: 69 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive4[] = "d(1,2,1,'16.15','10:49:30','0.37','55500','16.09','16.15','81500',4);\n";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive5[] = "d(1,2,1,'16.06',1,'-0.18','19000','16.06','16.09','62000',4);\n";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive6[] = "d(1,2,1,'15.99',1,'-0.62','71500','15.99','16.02','73000',4);\n";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive7[] = "d(1,8,2,'10:49:31',1,'89000','4.92',1,'65500',4);\n";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	// (record-time: 50 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive8[] = "d(1,7,1,'14.17','10:49:31','-7.92','74000','14.15','14.17','97000',4);\n";
long WebSocketReceiveLen8   = sizeof(WebSocketReceive8) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive9[] = "d(1,2,1,'15.96','10:49:31','-0.8','85000','15.94','15.96','92500',4);\n";
long WebSocketReceiveLen9   = sizeof(WebSocketReceive9) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive10[] = "d(1,10,1,'8.0','10:49:31','5.12','94500','7.97','8.0','57500',4);\n";
long WebSocketReceiveLen10   = sizeof(WebSocketReceive10) - 1;	// (record-time: 66 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive11[] = "d(1,2,1,'16.11',1,'0.12','11000','16.11','16.14','32500',4);\n";
long WebSocketReceiveLen11   = sizeof(WebSocketReceive11) - 1;	// (record-time: 61 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive12[] = "d(1,2,1,'16.25','10:49:32','0.99','49500','16.24','16.25','38000',4);\n";
long WebSocketReceiveLen12   = sizeof(WebSocketReceive12) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive13[] = "d(1,3,2,'10:49:32',1,'64000','7.18','7.2','11500',4);\n";
long WebSocketReceiveLen13   = sizeof(WebSocketReceive13) - 1;	// (record-time: 54 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive14[] = "d(1,2,1,'16.13','10:49:33','0.24','19000','16.13','16.18','80500',4);\n";
long WebSocketReceiveLen14   = sizeof(WebSocketReceive14) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive15[] = "d(1,5,1,'8.72','10:49:33','14.58','40500','8.69','8.72','30500',4);\n";
long WebSocketReceiveLen15   = sizeof(WebSocketReceive15) - 1;	// (record-time: 68 bytes)

#endif
