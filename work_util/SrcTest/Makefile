all: cptest
    
cptest: cptest.cpp suma.cpp
	g++ -g -o cptest cptest.cpp suma.cpp
	@echo "----------------------------------------------------"
	@./cptest
	@echo "----------------------------------------------------"
	mv ./cptest ../cptest.o  

clean:
	rm cptest.o