# Solution Overview

## Introduction

SmartSupply AI is a supply chain disruption assistant designed to help logistics teams identify high-risk shipments and make faster operational decisions.

The current prototype is implemented as a C++ command-line application.

## How the Solution Works

The user enters shipment and fleet information into the application.

The system then:

1. Checks the status of each shipment.
2. Calculates a risk score based on shipment status.
3. Checks cold-chain temperature conditions.
4. Classifies shipments into Low, Medium, or High priority.
5. Recommends an alternate route for high-risk shipments.
6. Calculates the number of idle trucks.
7. Recommends redeploying idle trucks to high-priority shipments.

## Core Mechanism

The prototype uses rule-based decision logic.

For example:

- A disrupted shipment receives a higher risk score.
- A delayed shipment receives a medium risk score.
- A cold-chain temperature outside the defined safe range increases the risk.
- A high-risk shipment receives an immediate-action recommendation.
- Idle trucks are identified by comparing total trucks with busy trucks.

## User Experience

The user interacts with the application through the command line.

The application first collects shipment information and then generates a risk report.

The report displays:

- Shipment ID
- Route
- Risk score
- Priority level
- Recommended action
- Cold-chain warnings
- Fleet utilisation information

## What Makes the Solution Useful

Instead of manually checking every shipment, the prototype provides a structured risk report and highlights shipments that require attention.

It combines shipment disruption analysis, cold-chain monitoring, and fleet utilisation in one application.

## Future Improvements

The prototype can be extended with:

- Real-time GPS data
- Weather information
- IoT temperature sensors
- Live traffic information
- Machine-learning-based risk prediction
- A web-based dashboard
- Real-time IBM Bob/AI integration

## Current Scope

The current version is a prototype using manually entered data and predefined decision rules. It demonstrates the core idea of identifying supply chain risks and recommending operational actions.
