class ProductOfNumbers {
public:
    // This stores the prefix products
    vector<int> prefixProducts;
    
    ProductOfNumbers() {
        // Initialize with 1 to simplify the multiplication logic
        prefixProducts.push_back(1);
    }
    
    void add(int num) {
        // If the added number is 0, we reset the prefix products
        if (num == 0) {
            prefixProducts.clear();
            // Reset the prefix product with 1
            prefixProducts.push_back(1);
        } else {
            // Add the new product to the list (multiply the last element by num)
            prefixProducts.push_back(prefixProducts.back() * num);
        }
    }
    
    int getProduct(int k) {
        // If there are fewer than k products (due to a reset by 0), return 0
        if (k >= prefixProducts.size()) {
            return 0;
        }
        // The product of the last k numbers is the division of the last prefix product
        // by the one k positions back
        return prefixProducts.back() / prefixProducts[prefixProducts.size() - k - 1];
    }
};
