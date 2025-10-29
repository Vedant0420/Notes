<?php
class BankAccount {
    public $accountNumber;
    public $balance;

    public function __construct($accNum, $bal = 0) {
        $this->accountNumber = $accNum;
        $this->balance = $bal;
    }

    public function deposit($amount) {
        $this->balance += $amount;
    }

    public function withdraw($amount) {
        if($amount <= $this->balance) {
            $this->balance -= $amount;
        } else {
            echo "Not enough balance!<br>";
        }
    }

    public function showBalance() {
        echo "Account: $this->accountNumber, Balance: $this->balance<br>";
    }
}

$acc = new BankAccount("12345", 1000);
$acc->deposit(500);
$acc->withdraw(300);
$acc->showBalance();
?>
