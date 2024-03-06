#pragma once

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class GenericStack {
private:
    Node<T>* topNode;

public:
    // Konstruktor
    GenericStack() : topNode(nullptr) {}

    // Destruktor
    ~GenericStack() {
        while (!isEmpty()) {
            pop();
        }
    }

    // Funktionen
    void push(const T& element) {
        Node<T>* newNode = new Node<T>(element);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (!isEmpty()) {
            Node<T>* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    T top() const {
        if (!isEmpty()) {
            return topNode->data;
        }
        else {
            // Hier könnte man eine Exception werfen oder einen sinnvollen Standardwert zurückgeben.
            // In diesem Beispiel wird ein Standardwert zurückgegeben.
            return T();
        }
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }

    size_t size() const {
        size_t count = 0;
        Node<T>* current = topNode;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};
