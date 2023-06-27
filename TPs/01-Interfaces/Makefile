Conversion.o: Conversion.c
	gcc -c Conversion.c

ConversionTests: Conversion.o
	gcc ConversionTest.c conversion.o -o ConversionTest

Tests: ConversionTests
	ConversionTest

TablasDeConversion: Conversion.o
	gcc TablasDeConversion.c conversion.o -o TablasDeConversion

Tablas: TablasDeConversion
	TablasDeConversion

Clean:
	rm -rf TablasDeConversion ConversionTests *.o