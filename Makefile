sas:	main.o Student.o Course.o Storage.o Control.o View.o List.o Monitor.o GPAMonitor.o FWMonitor.o
	g++ -o sas main.o Student.o Course.o Storage.o Control.o View.o List.o Monitor.o GPAMonitor.o FWMonitor.o 

main.o:	main.cc Student.h Course.h Storage.h Control.h View.h defs.h
	g++ -c main.cc

Student.o:	Student.cc Student.h Course.h List.h defs.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

Storage.o:	Storage.cc Storage.h Student.h defs.h
	g++ -c Storage.cc

Control.o:	Control.cc Control.h Student.h Storage.h View.h Monitor.h GPAMonitor.h FWMonitor.h
	g++ -c Control.cc

View.o: View.cc View.h Storage.h
	g++ -c View.cc

List.o:	List.cc List.h Course.h
	g++ -c List.cc

Monitor.o:	Monitor.cc Monitor.h Course.h Student.h
	g++ -c Monitor.cc

GPAMonitor.o:	GPAMonitor.cc GPAMonitor.h Monitor.h Student.h
	g++ -c GPAMonitor.cc

FWMonitor.o:	FWMonitor.cc FWMonitor.h Monitor.h Student.h
	g++ -c FWMonitor.cc

clean:
	rm -f *.o sas
