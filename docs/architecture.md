# System Architecture

## Architecture Overview

SmartSupply AI is currently implemented as a C++ command-line prototype.

The system takes shipment and fleet information from the user, processes the information using rule-based logic, and produces risk scores and recommended actions.

## Data Flow

```mermaid
graph TD
    A[User] --> B[Shipment Data]
    A --> C[Fleet Data]

    B --> D[Risk Analysis Engine]
    C --> D

    D --> E[Shipment Status Analysis]
    D --> F[Cold-Chain Temperature Check]
    D --> G[Fleet Utilisation Analysis]

    E --> H[Risk Score]
    F --> H

    H --> I[Priority Classification]

    I --> J[Recommended Action]
    G --> J

    J --> K[Supply Chain Risk Report]
