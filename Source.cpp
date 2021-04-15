#include <GL/glut.h>
#include <cmath>
#include <Windows.h>
//FONDO
void fondo() {
	glColor3ub(140, 201, 61);
	glBegin(GL_POLYGON);
		glVertex2d(0, 0);
		glVertex2d(1000, 0);
		glVertex2d(1000, 750);
		glVertex2d(0, 750);
	glEnd();
}
//ESTRELLAS
void estrella1() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(455, 529);
	glEnd();
}
void estrella2() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(474, 550);
	glEnd();
}
void estrella3() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(480, 560);
	glEnd();
}
void estrella4() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(617, 541);
	glEnd();
}
void estrella5() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(680, 520);
	glEnd();
}
void estrella6() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(699, 509);
	glEnd();
}
void estrella7() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(747, 458);
	glEnd();
}
void estrella8() {
	glColor3ub(255, 255, 255);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2d(217, 413);
	glEnd();
}

//PANEL SOLAR 1
void panel1_fondo() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(143, 231);
	glVertex2d(212, 231);
	glVertex2d(230, 293);
	glVertex2d(162, 293);
	glEnd();
}
void panel1_lado() {
	glColor3ub(14, 73, 107);
	glBegin(GL_POLYGON);
	glVertex2d(212, 231);
	glVertex2d(212, 226);
	glVertex2d(230, 287);
	glVertex2d(230, 293);
	glEnd();
}
void panel1_inferior() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
		glVertex2d(143, 231);
		glVertex2d(212, 231);
		glVertex2d(212, 226);
		glVertex2d(146, 226);
	glEnd();
}

void panel1_caja_ARI() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
		glVertex2d(166, 289);
		glVertex2d(182, 289);
		glVertex2d(178, 274);
		glVertex2d(161, 274);
	glEnd();
}
void panel1_caja_ARM() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
		glVertex2d(187, 289);
		glVertex2d(203, 289);
		glVertex2d(198, 274);
		glVertex2d(182, 274);
	glEnd();
}
void panel1_caja_ARD() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(208, 289);
	glVertex2d(224, 289);
	glVertex2d(219, 274);
	glVertex2d(203, 274);
	glEnd();
}

void panel1_caja_MEI() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
		glVertex2d(159, 269);
		glVertex2d(175, 269);
		glVertex2d(171, 254);
		glVertex2d(154, 254);
	glEnd();
}
void panel1_caja_MEM() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(180, 269);
	glVertex2d(196, 269);
	glVertex2d(191, 254);
	glVertex2d(175, 254);
	glEnd();
}
void panel1_caja_MED() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(201, 269);
	glVertex2d(217, 269);
	glVertex2d(212, 254);
	glVertex2d(196, 254);
	glEnd();
}

void panel1_caja_ABI() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(152, 249);
	glVertex2d(168, 249);
	glVertex2d(164, 234);
	glVertex2d(147, 234);
	glEnd();
}
void panel1_caja_ABM() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(173, 249);
	glVertex2d(189, 249);
	glVertex2d(184, 234);
	glVertex2d(168, 234);
	glEnd();
}
void panel1_caja_ABD() {
	glColor3ub(193, 255, 250);
	glBegin(GL_POLYGON);
	glVertex2d(194, 249);
	glVertex2d(210, 249);
	glVertex2d(205, 234);
	glVertex2d(189, 234);
	glEnd();
}

void panel1_pata1_1() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(156, 226);
	glVertex2d(156, 209);
	glVertex2d(161, 209);
	glVertex2d(161, 226);
	glEnd();
}
void panel1_pata1_2() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(156, 209);
	glVertex2d(152, 204);
	glVertex2d(165, 204);
	glVertex2d(161, 209);
	glEnd();
}
void panel1_pata2_1() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(200, 226);
	glVertex2d(200, 209);
	glVertex2d(205, 209);
	glVertex2d(205, 226);
	glEnd();
}
void panel1_pata2_2() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(200, 209);
	glVertex2d(196, 204);
	glVertex2d(208, 204);
	glVertex2d(205, 208);
	glEnd();
}

//PANEL SOLAR 2
void panel2_fondo() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(722, 231);
	glVertex2d(793, 231);
	glVertex2d(807, 277);
	glVertex2d(736, 277);
	glEnd();
}
void panel2_lado() {
	glColor3ub(14, 73, 107);
	glBegin(GL_POLYGON);
	glVertex2d(793, 231);
	glVertex2d(793, 227);
	glVertex2d(807, 267);
	glVertex2d(807, 277);
	glEnd();
}
void panel2_inferior() {
	glColor3ub(178, 234, 99);
	glBegin(GL_POLYGON);
	glVertex2d(722, 231);
	glVertex2d(726, 227);
	glVertex2d(793, 227);
	glVertex2d(793, 231);
	glEnd();
}

void panel2_caja_ARI() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(738, 272);
	glVertex2d(734, 256);
	glVertex2d(752, 256);
	glVertex2d(756, 272);
	glEnd();
}
void panel2_caja_ARM() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(761, 272);
	glVertex2d(757, 256);
	glVertex2d(775, 256);
	glVertex2d(779, 272);
	glEnd();
}
void panel2_caja_ARD() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(784, 272);
	glVertex2d(780, 256);
	glVertex2d(798, 256);
	glVertex2d(802, 272);
	glEnd();
}

void panel2_caja_ABI() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(732, 252);
	glVertex2d(728, 236);
	glVertex2d(746, 236);
	glVertex2d(750, 252);
	glEnd();
}
void panel2_caja_ABM() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(755, 252);
	glVertex2d(751, 236);
	glVertex2d(769, 236);
	glVertex2d(773, 252);
	glEnd();
}
void panel2_caja_ABD() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(778, 252);
	glVertex2d(774, 236);
	glVertex2d(792, 236);
	glVertex2d(796, 252);
	glEnd();
}

void panel2_pata1_1() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(735, 227);
	glVertex2d(735, 209);
	glVertex2d(739, 209);
	glVertex2d(739, 227);
	glEnd();
}
void panel2_pata1_2() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(735, 209);
	glVertex2d(730, 204);
	glVertex2d(744, 204);
	glVertex2d(739, 209);
	glEnd();
}
void panel2_pata2_1() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(782, 227);
	glVertex2d(782, 209);
	glVertex2d(786, 209);
	glVertex2d(786, 227);
	glEnd();
}
void panel2_pata2_2() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(782, 209);
	glVertex2d(777, 204);
	glVertex2d(791, 204);
	glVertex2d(786, 209);
	glEnd();
}

//EDIFICIO PEQUE DE ABAJO
void edf_pe_ab_techo() {
	glColor3ub(0, 82, 103);
	glBegin(GL_POLYGON);
	glVertex2d(397, 291);
	glVertex2d(427, 257);
	glVertex2d(481, 257);
	glVertex2d(452, 291);
	glEnd();
}
void edf_pe_ab_pared() {
	glColor3ub(178, 234, 99);
	glBegin(GL_POLYGON);
	glVertex2d(427, 257);
	glVertex2d(427, 204);
	glVertex2d(481, 204);
	glVertex2d(481, 257);
	glEnd();
}
void edf_pe_ab_lado() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(397, 291);
	glVertex2d(397, 204);
	glVertex2d(427, 204);
	glVertex2d(427, 257);
	glEnd();
}
void edf_pe_ab_ven1() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(448, 244);
	glVertex2d(448, 234);
	glVertex2d(461, 234);
	glVertex2d(461, 244);
	glEnd();
}
void edf_pe_ab_ven2() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(448, 224);
	glVertex2d(448, 214);
	glVertex2d(461, 214);
	glVertex2d(461, 224);
	glEnd();
}

//EDIFICIO MEDIANO DE ABAJO
void edf_med_ab_pared() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(583, 291);
	glVertex2d(583, 204);
	glVertex2d(633, 204);
	glVertex2d(633, 291);
	glVertex2d(608, 317);
	glEnd();
}
void edf_med_ab_lado(){
	glColor3ub(178, 234, 99);
	glBegin(GL_POLYGON);
	glVertex2d(712, 291);
	glVertex2d(712, 204);
	glVertex2d(633, 204);
	glVertex2d(633, 291);
	glVertex2d(608, 317);
	glVertex2d(687, 317);
	glEnd();
}
void edf_med_ab_techo(){
	int priPunto[2] = {608, 317};
	int segPunto[2] = {633, 291};
	glColor3ub(13, 178, 73);
	for (int i = 0; i < 9; i++){
		glBegin(GL_POLYGON);
		glVertex2d(priPunto[0], priPunto[1]);
		glVertex2d(segPunto[0], segPunto[1]);
		segPunto[0] += 6;
		priPunto[0] += 6;
		glVertex2d(segPunto[0], segPunto[1]);
		glVertex2d(priPunto[0], priPunto[1]);
		glEnd();
		priPunto[0] += 3;
		segPunto[0] += 3;
	}
}
void edf_med_ab_puntitos(){
	int puntoInicial[2] = {643, 280};
	glColor3ub(0, 82, 103);
	glPointSize(3);
	for (int i = 0; i < 6; i++) {
		puntoInicial[0] = 643;
		for (int j = 0; j < 7; j++) {
			glBegin(GL_POINTS);
				glVertex2d(puntoInicial[0], puntoInicial[1]);
			glEnd();
			puntoInicial[0] += 10;
		}
		puntoInicial[1] -= 10;
	}
}

//MANSION DE EN MEDIO
void man_med_lado() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
	glVertex2d(452, 366);
	glVertex2d(409, 405);
	glVertex2d(367, 366);
	glVertex2d(367, 291);
	glVertex2d(452, 291);
	glEnd();
}
void man_med_techo(){
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(294, 405);
	glVertex2d(252, 366);
	glVertex2d(367, 366);
	glVertex2d(409, 405);
	glEnd();
	}
void man_med_techo_saliente() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(309, 385);
	glVertex2d(288, 366);
	glVertex2d(331, 366);
	glEnd();
}
void man_med_pared() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(252, 366);
	glVertex2d(252, 291);
	glVertex2d(367, 291);
	glVertex2d(367, 366);
	glEnd();
}
void man_med_techo_sombra(){
	glColor3ub(0, 82, 103);
	glBegin(GL_POLYGON);
	glVertex2d(309, 385);
	glVertex2d(331, 366);
	glVertex2d(349, 385);
	glEnd();
	}
void man_med_puntitos()
{
	int puntoInicial[2] = { 386, 348 };
	glColor3ub(0, 82, 103);
	glPointSize(5);
	for (int i = 0; i < 4; i++) {
		puntoInicial[0] = 386;
		for (int j = 0; j < 5; j++) {
			glBegin(GL_POINTS);
			glVertex2d(puntoInicial[0], puntoInicial[1]);
			glEnd();
			puntoInicial[0] += 12;
		}
		puntoInicial[1] -= 13;
	}
	}
void man_med_ventanas(){
	int puntoA[2] = { 265, 358 };
	int puntoB[2] = { 263, 356 };
	int puntoC[2] = { 263, 344 };
	int puntoD[2] = { 264, 342 };
	int puntoE[2] = { 267, 342 };
	int puntoF[2] = { 268, 344 };
	int puntoG[2] = { 268, 356 };
	int puntoH[2] = { 266, 358 };
	for (int i = 0; i < 2; i++) {
		puntoA[0] = 265;
		puntoB[0] = 263;
		puntoC[0] = 263;
		puntoD[0] = 264;
		puntoE[0] = 267;
		puntoF[0] = 268;
		puntoG[0] = 268;
		puntoH[0] = 266;
		for (int j = 0; j < 5; j++) {
			glColor3ub(12, 131, 138);
			glBegin(GL_POLYGON);
			glVertex2d(puntoA[0], puntoA[1]);
			glVertex2d(puntoB[0], puntoB[1]);
			glVertex2d(puntoG[0], puntoG[1]);
			glVertex2d(puntoH[0], puntoH[1]);
			glEnd();

			glColor3ub(178, 234, 99);
			glBegin(GL_POLYGON);
			glVertex2d(puntoB[0], puntoB[1]);
			glVertex2d(puntoC[0], puntoC[1]);
			glVertex2d(puntoD[0], puntoD[1]);
			glVertex2d(puntoE[0], puntoE[1]);
			glVertex2d(puntoF[0], puntoF[1]);
			glVertex2d(puntoG[0], puntoG[1]);
			glEnd();
			puntoA[0] += 22;
			puntoB[0] += 22;
			puntoC[0] += 22;
			puntoD[0] += 22;
			puntoE[0] += 22;
			puntoF[0] += 22;
			puntoG[0] += 22;
			puntoH[0] += 22;
		}
		puntoA[1] -= 26;
		puntoB[1] -= 26;
		puntoC[1] -= 26;
		puntoD[1] -= 26;
		puntoE[1] -= 26;
		puntoF[1] -= 26;
		puntoG[1] -= 26;
		puntoH[1] -= 26;
	}
	}

//EDIFICIO CORTADO DE ENMEDIO
void edf_cor_med_pared1() {
	glColor3ub(142, 243, 239);		
	glBegin(GL_POLYGON);
		glVertex2d(634, 291);
		glVertex2d(712, 291);
		glVertex2d(712, 396);
		glVertex2d(692, 396);
		glVertex2d(692, 420);
		glVertex2d(633, 420);
	glEnd();
}
void edf_cor_med_lado(){
	glColor3ub(17, 66, 107);
	glBegin(GL_POLYGON);
		glVertex2d(712, 291);
		glVertex2d(798, 291);
		glVertex2d(798, 359);
		glVertex2d(770, 359);
		glVertex2d(770, 396);
		glVertex2d(712, 396);
	glEnd();
}
void edf_cor_med_techo(){
	glColor3ub(17, 66, 107);
	glBegin(GL_POLYGON);
	glVertex2d(633, 420);
	glVertex2d(692, 420);
	glVertex2d(717, 446);
	glVertex2d(658, 446);
	glEnd();
}
void edf_cor_med_techo_pared(){
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
		glVertex2d(692, 396);
		glVertex2d(742, 396);
		glVertex2d(742, 420);
		glVertex2d(717, 446);
		glVertex2d(692, 420);
	glEnd();
}
void edf_cor_med_pared_ventanas(){
	int puntoA[2] = {639, 411};
	int puntoB[2] = {647, 411};
	int puntoC[2] = {647, 400};
	int puntoD[2] = {639, 400};
	for (int i = 0; i < 3; i++) {
		puntoA[0] = 639;
		puntoB[0] = 647;
		puntoC[0] = 647;
		puntoD[0] = 639;
		for (int j = 0; j < 4; j++) {
			glColor3ub(13, 178, 73);
			glBegin(GL_POLYGON);
			glVertex2d(puntoA[0], puntoA[1]);
			glVertex2d(puntoB[0], puntoB[1]);
			glVertex2d(puntoC[0], puntoC[1]);
			glVertex2d(puntoD[0], puntoD[1]);
			glEnd();
			puntoA[0] += 20;
			puntoB[0] += 20;
			puntoC[0] += 20;
			puntoD[0] += 20;
		}
		puntoA[1] -= 31;
		puntoB[1] -= 31;
		puntoC[1] -= 31;
		puntoD[1] -= 31;
	}
}
void edf_cor_med_lado_ventanas(){
	int puntoA[2] = {722, 380};
	int puntoB[2] = {730, 380};
	int puntoC[2] = {730, 370};
	int puntoD[2] = {722, 370};
	for (int i = 0; i < 3; i++) {
		puntoA[0] = 722;
		puntoB[0] = 730;
		puntoC[0] = 730;
		puntoD[0] = 722;
		for (int j = 0; j < 4; j++) {
			if ((j == 2 || j == 3) && i == 0) {}
			else {
				glColor3ub(13, 178, 73);
				glBegin(GL_POLYGON);
					glVertex2d(puntoA[0], puntoA[1]);
					glVertex2d(puntoB[0], puntoB[1]);
					glVertex2d(puntoC[0], puntoC[1]);
					glVertex2d(puntoD[0], puntoD[1]);
				glEnd();
			}
			puntoA[0] += 20;
			puntoB[0] += 20;
			puntoC[0] += 20;
			puntoD[0] += 20;
		}
		puntoA[1] -= 31;
		puntoB[1] -= 31;
		puntoC[1] -= 31;
		puntoD[1] -= 31;
	}
}


//EDIFICIO DERECHA ALTO
void edf_der_alto_pared() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(602, 317);
	glVertex2d(602, 420);
	glVertex2d(580, 475);
	glVertex2d(560, 420);
	glVertex2d(560, 317);
	glEnd();
}
void edf_der_alto_lado(){
	glColor3ub(17, 66, 107);
	glBegin(GL_POLYGON);
	glVertex2d(602, 317);
	glVertex2d(632, 317);
	glVertex2d(633, 420);
	glVertex2d(602, 420);
	glEnd();
}
void edf_der_alto_techo(){
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
		glVertex2d(719, 420);
		glVertex2d(697, 475);
		glVertex2d(580, 475);
		glVertex2d(602, 420);
	glEnd();
}
void edf_der_alto_techo_add(){
	int puntoA[2] = {610, 420};
	int puntoB[2] = {617, 420};
	int puntoD[2] = {595, 475};
	int puntoC[2] = {588, 475};
	for (int i = 0; i < 6; i++) {
			glColor3ub(13, 178, 73);
			glBegin(GL_POLYGON);
			glVertex2d(puntoA[0], puntoA[1]);
			glVertex2d(puntoB[0], puntoB[1]);
			glVertex2d(puntoC[0], puntoC[1]);
			glVertex2d(puntoD[0], puntoD[1]);
			glEnd();
			puntoA[0] += 19;
			puntoB[0] += 19;
			puntoC[0] += 19;
			puntoD[0] += 19;
		}
}

//EDIFICIO MEDIO ALTO

void edf_med_alto_pared() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(452, 366);
	glVertex2d(512, 366);
	glVertex2d(512, 475);
	glVertex2d(482, 500);
	glVertex2d(452, 475);
	glEnd();
}
void edf_med_alto_techo1() {
	glColor3ub(17, 66, 107);
	glBegin(GL_POLYGON);
	glVertex2d(452, 475);
	glVertex2d(482, 500);
	glVertex2d(482, 525);
	glVertex2d(452, 502);
	glEnd();
}
void edf_med_alto_techo2() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
	glVertex2d(512, 475);
	glVertex2d(482, 500);
	glVertex2d(482, 525);
	glVertex2d(512, 502);
	glEnd();
}
void edf_med_alto_puntitos() {
	int puntoInicial[2] = { 462, 479};
	glColor3ub(13, 178, 73);
	glPointSize(3);
	for (int i = 0; i < 6; i++) {
		puntoInicial[0] = 462;
		for (int j = 0; j < 5; j++) {
			if (((j <= 1 || j >= 3) && i == 0) || ((j == 0 || j == 4) && i == 1)) {}
			else {
				glBegin(GL_POINTS);
				glVertex2d(puntoInicial[0], puntoInicial[1]);
				glEnd();
			}
			puntoInicial[0] += 10;
		}
		puntoInicial[1] -= 10;
	}
}

//EDIFICIO IZQUIERDA ALTO
void edf_izq_alto_pared() {
	glColor3ub(142, 243, 239);
	glBegin(GL_POLYGON);
	glVertex2d(324, 366);
	glVertex2d(374, 366);
	glVertex2d(374, 439);
	glVertex2d(349, 462);
	glVertex2d(324, 439);
	glEnd();
}
void edf_izq_alto_lado() {
	glColor3ub(178, 234, 99);
	glBegin(GL_POLYGON);
		glVertex2d(374, 366);
		glVertex2d(452, 366);
		glVertex2d(452, 439);
		glVertex2d(374, 439);
	glEnd();
}
void edf_izq_alto_techo() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(374, 439);
	glVertex2d(452, 439);
	glVertex2d(427, 462);
	glVertex2d(349, 462);
	glEnd();
}

//PASTO TIPO 1
void pasto_tipo1_1() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(350, 204);
	glVertex2d(634, 204);
	glVertex2d(634, 474);
	glVertex2d(358, 474);
	glEnd();
}
void pasto_tipo1_2() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(218, 204);
	glVertex2d(360, 204);
	glVertex2d(360, 330);
	glVertex2d(218, 330);
	glEnd();
}
void pasto_tipo1_3() {
	glColor3ub(13, 178, 73);
	glBegin(GL_POLYGON);
	glVertex2d(218, 204);
	glVertex2d(82, 204);
	glVertex2d(86, 215);
	glVertex2d(92, 219);
	glVertex2d(100, 220);
	glVertex2d(102, 229);
	glVertex2d(106, 237);
	glVertex2d(110, 242);
	glVertex2d(116, 245);
	glVertex2d(131, 245);
	glVertex2d(138, 257);
	glVertex2d(142, 257);
	glVertex2d(151, 257);
	glVertex2d(218, 294);
	glEnd();
}

//PASTO TIPO 2
void pasto_tipo2_1() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
	glVertex2d(452, 439);
	glVertex2d(452, 500);
	glVertex2d(437, 502);
	glVertex2d(432, 497);
	glVertex2d(417, 484);
	glVertex2d(370, 483);
	glVertex2d(360, 477);
	glVertex2d(349, 462);
	glEnd();
}
void pasto_tipo2_2() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
	glVertex2d(300, 204);
	glVertex2d(397, 204);
	glVertex2d(397, 215);
	glVertex2d(373, 215);
	glVertex2d(363, 224);
	glVertex2d(348, 230);
	glVertex2d(335, 226);
	glVertex2d(327, 226);
	glVertex2d(300, 240);
	glVertex2d(258, 237);
	glVertex2d(236, 229);
	glVertex2d(225, 220);
	glVertex2d(221, 204);
	glEnd();
}
void pasto_tipo2_3() {
	glColor3ub(6, 127, 134);
	glBegin(GL_POLYGON);
	glVertex2d(712, 204);
	glVertex2d(712, 291);
	glVertex2d(798, 291);
	glVertex2d(809, 288);
	glVertex2d(823, 271);
	glVertex2d(853, 268);
	glVertex2d(861, 257);
	glVertex2d(869, 244);
	glVertex2d(875, 231);
	glVertex2d(885, 231);
	glVertex2d(900, 220);
	glVertex2d(904, 204);
	glEnd();
}

//PASTO TIPO 3
void pasto_tipo3_1() {
	glColor3ub(17, 66, 107);
	glBegin(GL_POLYGON);
	glVertex2d(583, 204);
	glVertex2d(583, 291);
	glVertex2d(577, 290);
	glVertex2d(567, 285);
	glVertex2d(556, 266);
	glVertex2d(543, 254);
	glVertex2d(523, 250);
	glVertex2d(513, 238);
	glVertex2d(498, 239);
	glVertex2d(481, 230);
	glVertex2d(481, 204);
	glEnd();
}

//PASTO TIPO 4
void pasto_tipo4_1() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(495, 204);
	glVertex2d(520, 204);
	glVertex2d(520, 247);
	glVertex2d(518, 252);
	glVertex2d(513, 255);
	glVertex2d(497, 253);
	glVertex2d(481, 267);
	glVertex2d(466, 276);
	glVertex2d(466, 204);
	glEnd();
}
//ARBOLES
void arbol1() {
	glColor3ub(6, 127, 134);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(229, 299);
	glVertex2d(248, 416);
	glVertex2d(264, 299);
	glEnd();
}
void arbol2() {
	glColor3ub(0, 82, 103);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(204, 293);
	glVertex2d(218, 360);
	glVertex2d(232, 293);
	glEnd();
}
void arbol3() {
	glColor3ub(0, 82, 103);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(264, 248);
	glVertex2d(294, 248);
	glVertex2d(279, 311);
	glEnd();
}
void arbol4() {
	glColor3ub(6, 127, 134);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(508, 337);
	glVertex2d(523, 409);
	glVertex2d(536, 337);
	glEnd();
}
void arbol5() {
	glColor3ub(17, 66, 107);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(499, 390);
	glVertex2d(487, 315);
	glVertex2d(511, 315);
	glEnd();
}
void arbol6() {
	glColor3ub(142, 243, 239);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2d(549, 390);
	glVertex2d(537, 315);
	glVertex2d(561, 315);
	glEnd();
}
//DIBUJO SETTINGS
void dibujo() {
	glLoadIdentity();
	gluOrtho2D(0, 1000, 0, 750);
	glClear(GL_COLOR_BUFFER_BIT);
	//FONDO
	fondo();
	//ESTRELLAS
	estrella1();
	estrella2();
	estrella3();
	estrella4();
	estrella5();
	estrella6();
	estrella7();
	estrella8();
	//PASTO TIPO 1
	pasto_tipo1_1();
	pasto_tipo1_2();
	pasto_tipo1_3();

	//PASTO TIPO 2
	pasto_tipo2_1();
	pasto_tipo2_2();
	pasto_tipo2_3();

	//PASTO TIPO 4
	pasto_tipo4_1();
	
	//PASTO TIPO 3
	pasto_tipo3_1();

	//ARBOLES
	arbol1();
	arbol2();

	//PANEL 1
	panel1_fondo();
	panel1_lado();
	panel1_inferior();
	panel1_caja_ARI();
	panel1_caja_ARM();
	panel1_caja_ARD();
	panel1_caja_MEI();
	panel1_caja_MEM();
	panel1_caja_MED();
	panel1_caja_ABI();
	panel1_caja_ABM();
	panel1_caja_ABD();
	panel1_pata1_1();
	panel1_pata1_2();
	panel1_pata2_1();
	panel1_pata2_2();

	//PANEL 2
	panel2_fondo();
	panel2_lado();
	panel2_inferior();
	panel2_caja_ARI();
	panel2_caja_ARM();
	panel2_caja_ARD();
	panel2_caja_ABI();
	panel2_caja_ABM();
	panel2_caja_ABD();
	panel2_pata1_1();
	panel2_pata1_2();
	panel2_pata2_1();
	panel2_pata2_2();

	//EDIFICIO PEQUE DE ABAJO
	edf_pe_ab_techo();
	edf_pe_ab_pared();
	edf_pe_ab_lado();
	edf_pe_ab_ven1();
	edf_pe_ab_ven2();

	//EDIFICIO DERECHA ALTO
	edf_der_alto_pared();
	edf_der_alto_lado();
	edf_der_alto_techo();
	edf_der_alto_techo_add();

	//EDIFICIO MEDIO IZQUIERDA
	edf_izq_alto_pared();
	edf_izq_alto_lado();
	edf_izq_alto_techo();

	//EDIFICIO MEDIO ALTO
	edf_med_alto_pared();
	edf_med_alto_techo1();
	edf_med_alto_techo2();
	edf_med_alto_puntitos();

	//EDIFICIO CORTADO DE ENMEDIO
	edf_cor_med_pared1();
	edf_cor_med_lado();
	edf_cor_med_techo();
	edf_cor_med_techo_pared();
	edf_cor_med_pared_ventanas();
	edf_cor_med_lado_ventanas();

	//EDIFICIO MEDIO DE ABAJO
	edf_med_ab_pared();
	edf_med_ab_lado();
	edf_med_ab_techo();
	edf_med_ab_puntitos();

	//MANSION DE EN MEDIO
	man_med_lado();
	man_med_techo();
	man_med_techo_sombra();
	man_med_techo_saliente();
	man_med_pared();
	man_med_puntitos();
	man_med_ventanas();
	arbol3();
	arbol5();
	arbol6();
	arbol4();
	//FLUSH
	glFlush();
}
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1750, 1500);
	glutInitWindowPosition(300, 100);
	glutCreateWindow("Ejecutor");
	glutDisplayFunc(dibujo);
	glutMainLoop();
	return 0;
}