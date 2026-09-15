#include <iostream>
#include <string>
using namespace std;

struct Shipment
{
    int id;
    string source;
    string destination;
    string status;
    bool coldChain;
    float temperature;
};

int main()
{
    int n;

    cout << "Enter number of shipments: ";
    cin >> n;

    Shipment s[100];

    // Input shipment information
    for (int i = 0; i < n; i++)
    {
        cout << "\nShipment " << i + 1 << endl;

        cout << "Shipment ID: ";
        cin >> s[i].id;

        cout << "Source: ";
        cin >> s[i].source;

        cout << "Destination: ";
        cin >> s[i].destination;

        cout << "Status (Normal/Delayed/Disrupted): ";
        cin >> s[i].status;

        cout << "Cold Chain? (1 = Yes, 0 = No): ";
        cin >> s[i].coldChain;

        if (s[i].coldChain)
        {
            cout << "Current Temperature: ";
            cin >> s[i].temperature;
        }
        else
        {
            s[i].temperature = 0;
        }
    }

    cout << "\n========================================";
    cout << "\n     SUPPLY CHAIN RISK REPORT";
    cout << "\n========================================\n";

    for (int i = 0; i < n; i++)
    {
        int risk = 0;

        // Check shipment status
        if (s[i].status == "Disrupted")
            risk += 70;
        else if (s[i].status == "Delayed")
            risk += 40;

        // Check cold-chain temperature
        if (s[i].coldChain)
        {
            // Example safe range: 2°C to 8°C
            if (s[i].temperature < 2 || s[i].temperature > 8)
                risk += 30;
        }

        cout << "\nShipment ID: " << s[i].id;
        cout << "\nRoute: " << s[i].source
             << " -> " << s[i].destination;

        cout << "\nRisk Score: " << risk << "/100";

        // Risk classification
        if (risk >= 70)
        {
            cout << "\nPriority: HIGH";

            cout << "\nAction: Reroute shipment immediately.";
            cout << "\nSuggested Route: Alternate Route";
        }
        else if (risk >= 40)
        {
            cout << "\nPriority: MEDIUM";
            cout << "\nAction: Monitor and consider alternate carrier.";
        }
        else
        {
            cout << "\nPriority: LOW";
            cout << "\nAction: Continue normal operation.";
        }

        // Cold chain warning
        if (s[i].coldChain)
        {
            if (s[i].temperature < 2 || s[i].temperature > 8)
            {
                cout << "\nWARNING: Cold-chain temperature excursion!";
                cout << "\nAction: Inspect cargo immediately.";
            }
        }

        cout << "\n----------------------------------------";
    }

    // Fleet utilisation
    int trucks;
    int busyTrucks;

    cout << "\n\nEnter total number of trucks: ";
    cin >> trucks;

    cout << "Enter number of busy trucks: ";
    cin >> busyTrucks;

    int idleTrucks = trucks - busyTrucks;

    cout << "\nTotal Trucks : " << trucks;
    cout << "\nBusy Trucks  : " << busyTrucks;
    cout << "\nIdle Trucks  : " << idleTrucks;

    if (idleTrucks > 0)
    {
        cout << "\n\nRecommendation:";
        cout << "\nRedeploy " << idleTrucks
             << " idle truck(s) to high-priority shipments.";
    }
    else
    {
        cout << "\n\nAll trucks are currently utilised.";
    }

    cout << "\n\n========================================";
    cout << "\n       OPTIMISATION COMPLETE";
    cout << "\n========================================";

    return 0;
}
