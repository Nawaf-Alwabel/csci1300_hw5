#include <iostream>
using namespace std;

int totalGold(int donations[], int size) {
    int total_donation = 0;

    for (int i = 0; i < size; i++) {
        total_donation += donations[i];
    }

    return total_donation;
}

int main() {
    const int vault_goal = 42500;
    int count;
    int donations[100];

    cout << "Enter the number of gold donations: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    int total_donation = totalGold(donations, count);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total_donation << endl;
    cout << "Vault goal: " << vault_goal << endl;

    if (total_donation >= vault_goal) {
        cout << "The Vault is fully funded! Surplus: " << total_donation - vault_goal << " gold" << endl;
    } else {
        cout << "The Vault still needs " << vault_goal - total_donation << " more gold." << endl;
    }

    return 0;
}