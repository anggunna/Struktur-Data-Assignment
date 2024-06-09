#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Inisialisasi node
struct TreeNode {
    string value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(string val) : value(val), left(nullptr), right(nullptr) {}
};

// Buat node baru
TreeNode* createNode(string value) {
    return new TreeNode(value);
}

// Tambah node
TreeNode* insertNode(TreeNode* root, string value) {
    if (!root) {
        return createNode(value);
    }

    char direction;
    cout << "Masukkan 'L' untuk " << value << " subpohon kiri " << root->value << " atau 'R' untuk subpohon kanan: ";
    cin >> direction;

    if (direction == 'L' || direction == 'l') {
        root->left = insertNode(root->left, value);
    } else if (direction == 'R' || direction == 'r') {
        root->right = insertNode(root->right, value);
    } else {
        cout << "Arah tidak valid. Node belum dimasukan.\n";
    }

    return root;
}

// Pre-order traversal
void preOrder(TreeNode* node) {
    if (node) {
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

// In-order traversal
void inOrder(TreeNode* node) {
    if (node) {
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }
}

// Post-order traversal
void postOrder(TreeNode* node) {
    if (node) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
}

int main() { // Main program
    TreeNode* root = nullptr;
    int choice;
    string value;

    while (true) { // Menu
        cout << "\nMenu Data Tree:\n";
        cout << "1. Tambah simpul\n";
        cout << "2. Tampilkan pre-order\n";
        cout << "3. Tampilkan in-order\n";
        cout << "4. Tampilkan post-order\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: // Tambah nilai simpul
                cout << "Masukkan nilai simpul: ";
                cin >> value;
                if (!root) {
                    root = createNode(value);
                } else {
                    root = insertNode(root, value);
                }
                break;
            case 2: // Menampilkan pre-order
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 3: // Menampilkan in-order
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 4: // Menampilkan post-order
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 5: // Keluar
                return 0;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}
