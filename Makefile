all: app

app: app.o catalog.o product.o
    g++ -o app app.o catalog.o product.o

app.o: app.cpp
    g++ -c app.cpp

catalog.o: catalog.cpp catalog.h
    g++ -c catalog.cpp

product.o: product.cpp product.h
    g++ -c product.cpp

clean:
    rm -f *.o app
