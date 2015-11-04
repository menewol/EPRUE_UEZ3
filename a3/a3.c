#include<stdio.h>

double CalcVol(double piV, double radiusV, double heightV)
{
	//Volumen berechnet sich durch Grundflaeche * Hoehe = (pi*r*r)*h
	return ((piV*radiusV*radiusV) * heightV);
}

double CalcMantel(double piM, double radiusM, double heightM)
{
	//Mantelfläche berechnet sich durch Hoehe * Umfang = 2*pi*r*h
	return 2 * piM * radiusM * heightM;
}

double CalcOberfl(double piO, double radiusO, double heightO)
{
	//Oberflaeche berechnet sich durch 2 * Grundflaeche + Mantelflaeche = 2*(pi*r*r) + 2*pi*r*h
	return ((2*(piO*radiusO*radiusO)) + (2*piO*radiusO*heightO));
}

int main(void)
{
	double pi = 3.141592, r = 2.5, h = 12.5; //Pi, Radius und Hoehe des Zylinders definieren
	double result; //Ergebnisse zwischenspeichern

	//Ausgabe der Angaben zur Berechnung
	printf("Berechnungen im Zylinder:\n\n");
	printf("---------------------------------------------\n");
	printf("Pi = %.2f\t r = %.2f cm\t h = %.2f cm\n",pi,r,h);
	printf("---------------------------------------------\n");
	
	//Volumen berechnen, abspeichern & ausgeben
	result = CalcVol(pi,r,h);
	printf("Das Volumen des Zylinders:\t  %.2f cm^3\n",result);

	//Mantelflaeche berechnen, abspeichern & ausgeben
	result = CalcMantel(pi,r,h);
	printf("Der Mantel des Zylinders:\t  %.2f cm^2\n",result);

	//Oberflaeche berechnen, abspeichern & ausgeben
	result = CalcOberfl(pi,r,h);
	printf("Die Oberflaeche des Zylinders:\t  %.2f cm^2\n",result);
	
	getchar();
	return 0;
}