# DecisionBuddy CLI

A minimalist command-line productivity tool built in C to eliminate decision paralysis and stop procrastination. Developed for the Design4Future Hackathon.

## Description

DecisionBuddy is designed for users who waste time overthinking their daily choices or struggling to start a task. Instead of managing complex schedules, this application provides three rapid, text-based interventions to force immediate action:
1. **The Focus Challenge:** Prompts the user to commit to a specific, short block of time.
2. **The Binary Decision Flip:** A coin-flip simulator to resolve choice stalemates, using a psychological trick to help the user identify their true preference.
3. **Random Productivity Rules:** Delivers instant, actionable core laws of productivity (like the 2-Minute Rule).

The project focuses entirely on utility and speed, running natively in the terminal without external dependencies.

## Features

- Written in pure C (C11/C17 compatible).
- Zero external dependencies or heavy frameworks.
- Uses system-time-seeded random number generation for unbiased choice selection.
- Lightweight and fast execution.

## Requirements

To compile and run this project, you need:
- A C compiler installed (GCC or Clang recommended).
- A terminal or command-line interface.

## Setup and Installation

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com
   ```

2. Navigate into the project directory:
   ```bash
   cd DecisionBuddy-CLI
   ```

3. Compile the source code using GCC:
   ```bash
   gcc main.c -o decisionbuddy
   ```

4. Run the executable:
   - On Linux/macOS:
     ```bash
     ./decisionbuddy
     ```
   - On Windows:
     ```cmd
     decisionbuddy.exe
     ```

## Usage

When you run the program, follow the on-screen numbered prompts to select an intervention method. Enter your numerical choice and press `Enter` to interact with the tool.

## License

This project is open-source and available under the MIT License.
