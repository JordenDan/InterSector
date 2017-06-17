Objects=Arc.o LineSeg.o Vector.o Sector.o 

InterSectorMain.o: InterSectorJudge.o $(Objects)

InterSectorJudge: $(Objects)

Arc.o: Vector.hpp Common.hpp
LineSeg.o: Vector.hpp Common.hpp
Vector.o:  Common.hpp
Sector.o: Common.hpp Arc.hpp LineSeg.hpp 

.PHONY : clean
clean : 
	-rm *.o 
