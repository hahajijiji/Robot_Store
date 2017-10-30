CXXFLAGS += --std=c++11

all: div main
rebuild: div clean main

debug: CXXFLAGS += -g
debug: rebuild

main: test_robot_part.o 
	$(CXX) $(CXXFLAGS) -o lms test_robot_part.o
test_robot_part.o: test_robot_part.cpp robot_part.h
	$(CXX) $(CXXFLAGS) -c test_robot_part.cpp

clean:
	-rm -f test_robot_part.o lms
div:
	@echo
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo