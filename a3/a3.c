#include<stdio.h>

#define PI (3.141592)

double CalcVol(double radiusV, double heightV)
{
	//Volumen berechnet sich durch Grundflaeche * Hoehe = (pi*r*r)*h
	return ((PI*radiusV*radiusV) * heightV);
}

double CalcMantel(double radiusM, double heightM)
{
	//Mantelfläche berechnet sich durch Hoehe * Umfang = 2*pi*r*h
	return 2 * PI * radiusM * heightM;
}

double CalcOberfl(double radiusO, double heightO)
{
	//Oberflaeche berechnet sich durch 2 * Grundflaeche + Mantelflaeche = 2*(pi*r*r) + 2*pi*r*h
	return ((2*(PI*radiusO*radiusO)) + (2*PI*radiusO*heightO));
}

int main(void)
{
	double r = 2.5, h = 12.5; // Radius und Hoehe des Zylinders definieren
	double result; //Ergebnisse zwischenspeichern

	//Ausgabe der Angaben zur Berechnung
	printf("Berechnungen im Zylinder:\n\n");
	printf("---------------------------------------------\n");
	printf("Pi = %.2f\t r = %.2f cm\t h = %.2f cm\n",PI,r,h);
	printf("---------------------------------------------\n");
	
	//Volumen berechnen, abspeichern & ausgeben
	result = CalcVol(r,h);
	printf("Das Volumen des Zylinders:\t  %.2f cm^3\n",result);

	//Mantelflaeche berechnen, abspeichern & ausgeben
	result = CalcMantel(r,h);
	printf("Der Mantel des Zylinders:\t  %.2f cm^2\n",result);

	//Oberflaeche berechnen, abspeichern & ausgeben
	result = CalcOberfl(r,h);
	printf("Die Oberflaeche des Zylinders:\t  %.2f cm^2\n",result);

	return 0;
}

