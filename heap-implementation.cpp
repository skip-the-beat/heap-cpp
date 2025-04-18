#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;
    void heapifyUp(int index) {
        if (index == 0)
            return;

        int parent = (index - 1) / 2;
        if (heap[index] < heap[parent]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }
public:
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h;
    h.insert(10);
    h.insert(5);
    h.insert(14);
    h.insert(2);
    h.insert(11);

    cout << "Min-Heap array: ";
    h.printHeap();

    return 0;
}
