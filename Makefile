# Generates executable
all:
	g++ -Wall main.cpp class/*.cpp -o main

clean:
	rm main