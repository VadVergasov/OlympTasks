#include <bits/stdc++.h>

namespace {
	const char* INPUT_FILE = "input.txt";
	const char* OUTPUT_FILE = "output.txt";
	const int MAX_QUERIES = 40;

	enum _TState {
		_UNKNOWN,
		_INIT,
		_IDLE   
	};
	
	_TState _state = _UNKNOWN;
	FILE* _fout = NULL;
	long _n, _a, _query;  
	bool DEBUG_OUTPUT = false;
    
	void _msg(const char* format, ...) {
    	if (_fout != NULL) {
			va_list args;
			va_start(args, format);
			vfprintf(_fout, format, args);
			va_end(args);
			fprintf(_fout, "\n");
		}
	}

	int _exit() {
        if (_fout) {
			fclose(_fout);
			_fout = NULL;
 		}
		exit(0);
	}

	int _pe(const char *msg) {
		_msg("PE");
		return _exit();
	}

	int _wa(const char *msg) {
		_msg("WA");
		return _exit();
	}

	int _ok(const char *msg) {
		_msg("OK");
		return _exit();
	}

}

int Init() {
	_state == _UNKNOWN || _pe("");
	
	_fout = fopen(OUTPUT_FILE, "w");
    FILE* fin = fopen(INPUT_FILE, "r");
	fin || _pe("");

	fscanf(fin, "%d%d", &_n, &_a) == 2 || _pe("");
    fclose(fin);
	
	if (DEBUG_OUTPUT) _msg("Init() = %d", _n);
	_query = 0;
	_state = _INIT;
	
	return _n;
}

int gcd(int a, int b) {
	while (a > 0 && b > 0) {
		if (a > b) a %= b; else b %= a;    	
	}
	return a + b;
}

int NeutrinoFlow(int x, int y) {
	if (_state != _IDLE & _state != _INIT) _pe("");
	if (x < 1 || x > 1000000000) _pe("");
	if (y < 0 || y > 1000000000) _pe("");
	_query++;
	if (_query > MAX_QUERIES) _pe("");
	int _X = x, _Y = y + _a;
	int g = gcd(_X, _Y);
	if (DEBUG_OUTPUT) _msg("NeutrinoFlow(%d, %d) = %d", x, y, g);
	_state = _IDLE;
	return g;
}

void Locate(int a) {
	if (DEBUG_OUTPUT) _msg("Locate(%d)", a);
	if (_state != _IDLE) _pe("");   
	if (a < 1 || a > _n) _pe("");
	if (a == _a) _ok(""); else _wa(""); 
	_exit();
}