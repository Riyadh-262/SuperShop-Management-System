# Supermarket Management System (C Project)

This is a simple console-based Supermarket Management System implemented in the C programming language. It serves as a basic example of using structs and arrays to manage inventory data.

## ✨ Features

* **Product Management:** Add new products to the inventory (ID, Name, Price, Quantity).
* **Inventory Display:** View a list of all products currently in stock.
* **Sales Transaction:** Simulate a product sale, update the quantity in stock, and calculate the total amount.
* **Stock Check:** Prevents a sale if the requested quantity exceeds the available stock.

## 🛠️ Prerequisites

To compile and run this program, you will need a C compiler (like GCC) installed on your system.

## 🚀 How to Compile and Run

1.  **Save the code:** Save the provided C code into a file named `Project_Super_Shop_Management.c`.

2.  **Compile the program** using a C compiler (e.g., GCC):

    ```bash
    gcc Project_Super_Shop_Management.c -o supermarket_manager
    ```

3.  **Run the executable:**

    ```bash
    ./supermarket_manager
    ```

## 📖 Usage

The program presents a menu with four options:

### 1. Add Product
Enter the product's ID, name, price, and initial stock quantity.

### 2. Display Products
View the details of all products currently stored in the system.

### 3. Make Sale
Enter the ID of the product being sold and the quantity. The system will process the sale, reduce the stock, and output the total sale amount.

### 4. Exit
Close the program.

## 💡 Code Details

* The inventory is managed using a `struct Product` definition.
* Products are stored in a fixed-size array (`products[100]`).
* The system operates within an infinite `while(1)` loop, driven by user input (`scanf`) until the user chooses the 'Exit' option.
