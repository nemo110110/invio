  t2 = dt*dt;
  t3 = b_dy*dt;
  t4 = b_ay*t2*(1.0/2.0);
  t5 = t3+t4;
  t6 = b_dz*dt;
  t7 = b_az*t2*(1.0/2.0);
  t8 = t6+t7;
  t9 = b_dx*dt;
  t10 = b_ax*t2*(1.0/2.0);
  t11 = t9+t10;
  t12 = qy*qy;
  t13 = t12*2.0;
  t14 = qz*qz;
  t15 = t14*2.0;
  t16 = t13+t15-1.0;
  t17 = qw*qz*2.0;
  t18 = qx*qy*2.0;
  t19 = t17+t18;
  t20 = qw*qy;
  t54 = qx*qz;
  t21 = t20-t54;
  t22 = lambda*qx*t8*2.0;
  t23 = lambda*qz*t8*2.0;
  t24 = b_dy*2.0;
  t25 = b_ay*dt;
  t26 = t24+t25;
  t27 = b_dx*2.0;
  t28 = b_ax*dt;
  t29 = t27+t28;
  t30 = b_dz*2.0;
  t31 = b_az*dt;
  t32 = t30+t31;
  t33 = qw*qz;
  t34 = qx*qy;
  t35 = qx*qx;
  t36 = t35*2.0;
  t37 = t15+t36-1.0;
  t38 = qw*qx*2.0;
  t39 = qy*qz*2.0;
  t40 = t38+t39;
  t41 = t33-t34;
  t42 = lambda*qx*t5*2.0;
  t43 = lambda*qy*t11*2.0;
  t44 = lambda*qw*t5*2.0;
  t45 = lambda*qz*t5*2.0;
  t46 = lambda*qx*t11*2.0;
  t47 = lambda*qy*t5*2.0;
  t48 = qw*qy*2.0;
  t49 = qx*qz*2.0;
  t50 = t48+t49;
  t51 = qw*qx;
  t52 = qy*qz;
  t53 = t13+t36-1.0;
  t55 = t51-t52;
  t56 = fabs(b_wx);
  t57 = fabs(b_wy);
  t58 = fabs(b_wz);
  t60 = t56*t56;
  t61 = t57*t57;
  t62 = t58*t58;
  t59 = t60+t61+t62;
  t63 = t2*t2;
  t64 = t59*t59;
  t65 = t63*t64*2.604166666666667E-4;
  t67 = t2*t59*(1.0/4.8E1);
  t66 = t65-t67+1.0/2.0;
  t68 = (b_wx/fabs(b_wx));
  t69 = t2*t56*t68*(1.0/2.4E1);
  t71 = t56*t59*t63*t68*(1.0/9.6E2);
  t70 = t69-t71;
  t72 = (b_wy/fabs(b_wy));
  t73 = t2*t57*t72*(1.0/2.4E1);
  t75 = t57*t59*t63*t72*(1.0/9.6E2);
  t74 = t73-t75;
  t76 = (b_wz/fabs(b_wz));
  t77 = t2*t58*t76*(1.0/2.4E1);
  t79 = t58*t59*t63*t76*(1.0/9.6E2);
  t78 = t77-t79;
  t80 = t63*t64*(1.0/3.84E2);
  t89 = t2*t59*(1.0/2.0);
  t81 = t80-t89+1.0;
  t82 = t2*t56*t68;
  t91 = t56*t59*t63*t68*(1.0/9.6E1);
  t83 = t82-t91;
  t84 = t2*t57*t72;
  t93 = t57*t59*t63*t72*(1.0/9.6E1);
  t85 = t84-t93;
  t86 = t2*t58*t76;
  t94 = t58*t59*t63*t76*(1.0/9.6E1);
  t87 = t86-t94;
  t88 = b_wz*t66;
  t90 = b_wx*t66;
  t92 = qw*t66;
  t95 = b_wy*t66;
  t96 = qy*t66;
  t97 = t66*t66;
  t98 = b_wy*b_wy;
  t99 = b_wz*b_wz;
  t100 = b_wx*t97*2.0;
  t102 = t63*t64;
  t103 = t2*t59*8.0E1;
  t101 = t102-t103+1.92E3;
  t104 = t101*t101;
  t105 = t66*t81*2.0;
  t106 = b_wy*t97*2.0;
  t107 = b_wz*t70*t81*2.0;
  t108 = b_wz*t66*t83*2.0;
  t109 = t66*t70*t99*4.0;
  t110 = b_wz*t74*t81*2.0;
  t111 = b_wz*t66*t85*2.0;
  t112 = b_wx*b_wx;
  t113 = t66*t74*t99*4.0;
  t114 = b_wx*b_wy*t66*t78*4.0;
  t115 = t66*t78*t99*4.0;
  t116 = b_wx*b_wy*t104*1.356336805555556E-7;
  t117 = b_wy*b_wz*t66*t70*4.0;
  t118 = b_wz*t97*2.0;
  t119 = b_wy*t70*t81*2.0;
  t120 = b_wy*t66*t83*2.0;
  t121 = b_wx*b_wz*t66*t70*4.0;
  t122 = t66*t70*t112*4.0;
  t123 = t66*t70*t98*4.0;
  t124 = b_wy*t74*t81*2.0;
  t125 = b_wy*t66*t85*2.0;
  t126 = b_wx*b_wz*t66*t74*4.0;
  t127 = b_wx*t74*t81*2.0;
  t128 = b_wx*t66*t85*2.0;
  t129 = t66*t74*t112*4.0;
  t130 = t66*t74*t98*4.0;
  t131 = b_wy*t78*t81*2.0;
  t132 = b_wy*t66*t87*2.0;
  t133 = b_wx*b_wz*t66*t78*4.0;
  t134 = b_wx*t78*t81*2.0;
  t135 = b_wx*t66*t87*2.0;
  t136 = t66*t78*t112*4.0;
  t137 = t66*t78*t98*4.0;
  t138 = b_wx*b_wz*t104*1.356336805555556E-7;
  t139 = b_wy*t66*t81*2.0;
  t140 = b_wy*b_wz*t104*1.356336805555556E-7;
  A0[0][0] = 1.0;
  A0[0][3] = t45-lambda*qy*t8*2.0;
  A0[0][4] = t23+t47;
  A0[0][5] = t42-lambda*qw*t8*2.0-lambda*qy*t11*4.0;
  A0[0][6] = t22+t44-lambda*qz*t11*4.0;
  A0[0][7] = dt*t32*(t48-qx*qz*2.0)*(-1.0/2.0)-dt*t16*t29*(1.0/2.0)+dt*t19*t26*(1.0/2.0);
  A0[0][8] = -dt*lambda*t16;
  A0[0][9] = dt*lambda*t19;
  A0[0][10] = dt*lambda*t21*-2.0;
  A0[0][14] = lambda*t2*t16*(-1.0/2.0);
  A0[0][15] = lambda*t2*(t33+t34);
  A0[0][16] = -lambda*t2*t21;
  A0[1][1] = 1.0;
  A0[1][3] = t22-lambda*qz*t11*2.0;
  A0[1][4] = t43+lambda*qw*t8*2.0-lambda*qx*t5*4.0;
  A0[1][5] = t23+t46;
  A0[1][6] = lambda*qw*t11*-2.0+lambda*qy*t8*2.0-lambda*qz*t5*4.0;
  A0[1][7] = dt*t26*t37*(-1.0/2.0)+dt*t32*t40*(1.0/2.0)-dt*t29*(t17-t18)*(1.0/2.0);
  A0[1][8] = dt*lambda*t41*-2.0;
  A0[1][9] = -dt*lambda*t37;
  A0[1][10] = dt*lambda*t40;
  A0[1][14] = -lambda*t2*t41;
  A0[1][15] = lambda*t2*t37*(-1.0/2.0);
  A0[1][16] = lambda*t2*(t51+t52);
  A0[2][2] = 1.0;
  A0[2][3] = -t42+t43;
  A0[2][4] = -t44-lambda*qx*t8*4.0+lambda*qz*t11*2.0;
  A0[2][5] = t45+lambda*qw*t11*2.0-lambda*qy*t8*4.0;
  A0[2][6] = t46+t47;
  A0[2][7] = dt*t29*t50*(1.0/2.0)-dt*t32*t53*(1.0/2.0)-dt*t26*(t38-t39)*(1.0/2.0);
  A0[2][8] = dt*lambda*t50;
  A0[2][9] = dt*lambda*t55*-2.0;
  A0[2][10] = -dt*lambda*t53;
  A0[2][14] = lambda*t2*(t20+t54);
  A0[2][15] = -lambda*t2*t55;
  A0[2][16] = lambda*t2*t53*(-1.0/2.0);
  A0[3][3] = t81;
  A0[3][4] = -b_wx*t66;
  A0[3][5] = -b_wy*t66;
  A0[3][6] = -b_wz*t66;
  A0[3][11] = -qw*t83-qx*t66+b_wx*qx*t70+b_wy*qy*t70+b_wz*qz*t70;
  A0[3][12] = -qw*t85-qy*t66+b_wx*qx*t74+b_wy*qy*t74+b_wz*qz*t74;
  A0[3][13] = -qw*t87-qz*t66+b_wx*qx*t78+b_wy*qy*t78+b_wz*qz*t78;
  A0[4][3] = t90;
  A0[4][4] = t81;
  A0[4][5] = t88;
  A0[4][6] = -b_wy*t66;
  A0[4][11] = t92-qx*t83-b_wx*qw*t70-b_wz*qy*t70+b_wy*qz*t70;
  A0[4][12] = -qx*t85-qz*t66-b_wx*qw*t74-b_wz*qy*t74+b_wy*qz*t74;
  A0[4][13] = t96-qx*t87-b_wx*qw*t78-b_wz*qy*t78+b_wy*qz*t78;
  A0[5][3] = t95;
  A0[5][4] = -t88;
  A0[5][5] = t81;
  A0[5][6] = t90;
  A0[5][11] = -qy*t83+qz*t66-b_wy*qw*t70+b_wz*qx*t70-b_wx*qz*t70;
  A0[5][12] = t92-qy*t85-b_wy*qw*t74+b_wz*qx*t74-b_wx*qz*t74;
  A0[5][13] = -qx*t66-qy*t87-b_wy*qw*t78+b_wz*qx*t78-b_wx*qz*t78;
  A0[6][3] = t88;
  A0[6][4] = t95;
  A0[6][5] = -t90;
  A0[6][6] = t81;
  A0[6][11] = -t96-qz*t83-b_wz*qw*t70-b_wy*qx*t70+b_wx*qy*t70;
  A0[6][12] = qx*t66-qz*t85-b_wz*qw*t74-b_wy*qx*t74+b_wx*qy*t74;
  A0[6][13] = t92-qz*t87-b_wz*qw*t78-b_wy*qx*t78+b_wx*qy*t78;
  A0[7][7] = 1.0;
  A0[8][8] = 1.0;
  A0[8][14] = dt;
  A0[9][9] = 1.0;
  A0[9][15] = dt;
  A0[10][10] = 1.0;
  A0[10][16] = dt;
  A0[11][11] = 1.0;
  A0[12][12] = 1.0;
  A0[13][13] = 1.0;
  A0[14][14] = 1.0;
  A0[15][15] = 1.0;
  A0[16][16] = 1.0;
  A0[17][11] = gx*(t109+t123)+gy*(t106+t107+t108-b_wx*b_wy*t66*t70*4.0)-gz*(t119+t120+t121-b_wz*t97*2.0);
  A0[17][12] = gx*(t113+t130-b_wy*t97*4.0)+gy*(t100+t110+t111-b_wx*b_wy*t66*t74*4.0)-gz*(t124+t125+t126-t66*t81*2.0);
  A0[17][13] = gx*(t115+t137-b_wz*t97*4.0)-gz*(-t100+t131+t132+t133)-gy*(t105+t114-b_wz*t66*t87*2.0-b_wz*t78*t81*2.0);
  A0[17][17] = t98*t104*(-1.356336805555556E-7)-t99*t104*1.356336805555556E-7+1.0;
  A0[17][18] = t116-b_wz*t66*t81*2.0;
  A0[17][19] = t138+t139;
  A0[18][11] = gy*(t109+t122-b_wx*t97*4.0)-gz*(t105+t117-b_wx*t66*t83*2.0-b_wx*t70*t81*2.0)-gx*(-t106+t107+t108+b_wx*b_wy*t66*t70*4.0);
  A0[18][12] = gy*(t113+t129)+gz*(t118+t127+t128-b_wy*b_wz*t66*t74*4.0)-gx*(-t100+t110+t111+b_wx*b_wy*t66*t74*4.0);
  A0[18][13] = gy*(t115+t136-b_wz*t97*4.0)+gz*(t106+t134+t135-b_wy*b_wz*t66*t78*4.0)-gx*(-t105+t114+b_wz*t66*t87*2.0+b_wz*t78*t81*2.0);
  A0[18][17] = t116+b_wz*t66*t81*2.0;
  A0[18][18] = t99*t104*(-1.356336805555556E-7)-t104*t112*1.356336805555556E-7+1.0;
  A0[18][19] = t140-b_wx*t66*t81*2.0;
  A0[19][11] = gz*(t122+t123-b_wx*t97*4.0)+gx*(t118+t119+t120-t121)-gy*(-t105+t117+b_wx*t66*t83*2.0+b_wx*t70*t81*2.0);
  A0[19][12] = gz*(t129+t130-b_wy*t97*4.0)-gx*(t105-t124-t125+t126)-gy*(-t118+t127+t128+b_wy*b_wz*t66*t74*4.0);
  A0[19][13] = gz*(t136+t137)+gx*(t100+t131+t132-t133)-gy*(-t106+t134+t135+b_wy*b_wz*t66*t78*4.0);
  A0[19][17] = t138-t139;
  A0[19][18] = t140+b_wx*t66*t81*2.0;
  A0[19][19] = t98*t104*(-1.356336805555556E-7)-t104*t112*1.356336805555556E-7+1.0;
  A0[20][20] = 1.0;
  A0[21][21] = 1.0;
  A0[22][22] = 1.0;
  A0[23][23] = 1.0;
  A0[24][24] = 1.0;
  A0[25][25] = 1.0;
