<?php
class LibraryItem {
    public $title;
    public $author;

    public function __construct($title, $author) {
        $this->title = $title;
        $this->author = $author;
    }

    public function display() {
        echo "Title: $this->title, Author: $this->author<br>";
    }
}

class Book extends LibraryItem {
    public $pages;

    public function __construct($title, $author, $pages) {
        parent::__construct($title, $author);
        $this->pages = $pages;
    }

    public function display() {
        parent::display();
        echo "Pages: $this->pages<br>";
    }
}

class DVD extends LibraryItem {
    public $duration;

    public function __construct($title, $author, $duration) {
        parent::__construct($title, $author);
        $this->duration = $duration;
    }

    public function display() {
        parent::display();
        echo "Duration: $this->duration minutes<br>";
    }
}

$book = new Book("PHP Basics", "John Doe", 250);
$dvd = new DVD("Learn PHP", "Jane Smith", 120);

$book->display();
$dvd->display();
?>
