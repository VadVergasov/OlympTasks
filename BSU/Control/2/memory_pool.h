struct FreeListNode {
    int* next;
    int size;
    int* start;

    FreeListNode() {
        size = 0;
        start = 0;
        next = nullptr;
    }

    ~FreeListNode() {
        delete start;
        delete next;
    }
};

class Pool {
   public:
    Pool(int size) { char* data_; }
};
