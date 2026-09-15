# 🚚 SmartSupply AI – Supply Chain Disruption Assistant

> An intelligent prototype for identifying shipment risks, cold-chain problems, and idle fleet assets.

---

## 👥 Team

| Field         | Value                                              |
| ------------- | --------------------------------------             |
| **Team Name** | **tech titans**                                    |
| **Track**     | **AI**                                             |
| **Team Lead** | **SHUBHAM SHIYAL—26it085@charusat.edu.in**         |
| **Members**   | **MEGHAL PATEL,ADIT ROHIT,SHUBH SONI**             |

---

## 🎯 Problem Statement

Supply chain disruptions caused by weather events, port strikes, and geopolitical crises can affect hundreds of shipments at the same time. It is difficult to track these disruptions manually, while some fleet assets remain idle and other routes become overloaded.

Cold-chain shipments are especially vulnerable because temperature excursions can spoil valuable cargo and may only be discovered at delivery.

---

## 💡 Solution

**SmartSupply AI** is a supply chain disruption assistant that analyses shipment and fleet information to identify disrupted or delayed shipments and prioritise them based on risk.

It detects cold-chain temperature excursions, identifies idle fleet assets for redeployment, and recommends alternative routes or carriers for affected shipments.

---

## ✨ Key Features

* **Shipment Disruption Detection:** Identifies normal, delayed, and disrupted shipments.
* **Risk Scoring:** Calculates a risk score and classifies shipments as Low, Medium, or High priority.
* **Route Recommendation:** Suggests an alternate route for high-risk shipments.
* **Fleet Utilisation:** Identifies idle trucks that can be redeployed to high-priority shipments.
* **Cold-Chain Monitoring:** Detects unsafe temperature conditions and generates a warning.

---

## 🛠️ Tech Stack

| Category             | Technologies                 |
| -------------------- | ---------------------------- |
| **Languages**        | C++                          |
| **Frameworks**       | None                         |
| **IBM Technologies** | IBM Bob                      |
| **Databases**        | None                         |
| **Other**            | GitHub, C++ Standard Library |

---

## 📁 Repository Structure

```text
├── src/
│   ├── main.cpp
│   └── README.md
│
├── docs/
│   ├── problem-statement.md
│   ├── solution-overview.md
│   ├── architecture.md
│   └── setup-guide.md
│
├── demo/
│   ├── screenshots/
│   ├── demo-video-link.txt
│   └── live-demo-url.txt
│
├── presentation/
│   └── slides.pdf
│
└── submission.yaml
```

---

## ⚡ How to Run

### Requirements

* C++ compiler
* Git
* Windows, Linux, or macOS

### 1. Clone the repository

```bash
git clone https://github.com/shubhamx2403/bob-ai-hackathon-tech-titans.git
cd bob-ai-hackathon-tech-titans
```

### 2. Compile the program

```bash
g++ src/main.cpp -o SmartSupply
```

### 3. Run the program

On Linux/macOS:

```bash
./SmartSupply
```

On Windows:

```bash
SmartSupply.exe
```

### 4. Enter shipment information

The program will ask for:

* Shipment ID
* Source
* Destination
* Shipment status
* Cold-chain status
* Temperature
* Total trucks
* Busy trucks

The program then generates a risk report and recommendations.

---

## 🖥️ Demo

| Artifact        | Location                   |
| --------------- | -------------------------- |
| 📹 Demo Video   | `demo/demo-video-link.txt` |
| 🌐 Live Demo    | `demo/live-demo-url.txt`   |
| 🖼️ Screenshots | `demo/screenshots/`        |
| 📊 Presentation | `presentation/slides.pdf`  |

If the project is not deployed online, `live-demo-url.txt` will contain:

```text
NOT DEPLOYED
```

---

## ⚠️ Known Limitations

* The current prototype uses manually entered shipment and fleet data.
* Real-time weather, GPS, and IoT sensor data are not yet connected.
* Route recommendations are based on predefined logic rather than live traffic or logistics data.
* The current risk-scoring system uses rule-based calculations and can be improved with machine learning.
* The current prototype is a command-line C++ application and does not yet have a web dashboard.

---

## 🏅 What We're Most Proud Of

We are proud of creating a simple and practical solution to a real-world supply chain problem.

SmartSupply AI brings shipment risk detection, cold-chain monitoring, fleet utilisation, and actionable recommendations together in one solution. Our goal is to make complex supply chain problems easier to understand and help users take action before disruptions become more serious.

---

