void MyList::tambahBelakang(int databaru) {
    Node* baru = new Node;
    baru->data = databaru;
    baru->next = NULL;

    if (isEmpty()) {
        head = baru;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = baru;
    }
}


void MyList::hapusDepan() {
    if (isEmpty()) {
        cout << "List kosong" << endl;
    } else {
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node* hapus = head;
            head = head->next;
            delete hapus;
        }
    }
}
