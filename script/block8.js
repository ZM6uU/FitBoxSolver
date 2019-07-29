(function() {
"use strict";
var Block1 = document.getElementById("Button71");
var Block2 = document.getElementById("Button72");
var Block3 = document.getElementById("Button73");
var Block4 = document.getElementById("Button74");
var Block5 = document.getElementById("Button75");
var Block6 = document.getElementById("Button76");
var Block7 = document.getElementById("Button77");
var Block8 = document.getElementById("Button78");
var Block9 = document.getElementById("Button79");
var result = document.getElementById("result8");

//Block1
Block1.addEventListener("click", () => {
    Block1.classList.toggle("clicked");
    Block1.classList.toggle("Block");
    if (Block1.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 1;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 1;
        result.textContent = now_value;
    }
});

//Block2
Block2.addEventListener("click", () => {
    Block2.classList.toggle("clicked");
    Block2.classList.toggle("Block");
    if (Block2.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 2;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 2;
        result.textContent = now_value;
    }
});

//Block3
Block3.addEventListener("click", () => {
    Block3.classList.toggle("clicked");
    Block3.classList.toggle("Block");
    if (Block3.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 4;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 4;
        result.textContent = now_value;
    }
});

//Block4
Block4.addEventListener("click", () => {
    Block4.classList.toggle("clicked");
    Block4.classList.toggle("Block");
    if (Block4.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 8;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 8;
        result.textContent = now_value;
    }
});

//Block5
Block5.addEventListener("click", () => {
    Block5.classList.toggle("clicked");
    Block5.classList.toggle("Block");
    if (Block5.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 16;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 16;
        result.textContent = now_value;
    }
});

//Block6
Block6.addEventListener("click", () => {
    Block6.classList.toggle("clicked");
    Block6.classList.toggle("Block");
    if (Block6.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 32;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 32;
        result.textContent = now_value;
    }
});

//Block7
Block7.addEventListener("click", () => {
    Block7.classList.toggle("clicked");
    Block7.classList.toggle("Block");
    if (Block7.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 64;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 64;
        result.textContent = now_value;
    }
});

//Block8
Block8.addEventListener("click", () => {
    Block8.classList.toggle("clicked");
    Block8.classList.toggle("Block");
    if (Block8.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 128;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 128;
        result.textContent = now_value;
    }
});

//Block9
Block9.addEventListener("click", () => {
    Block9.classList.toggle("clicked");
    Block9.classList.toggle("Block");
    if (Block9.classList.contains("clicked")) {
        var now_value = parseInt(result.textContent, 10);
        now_value += 256;
        result.textContent = now_value;
    } else {
        var now_value = parseInt(result.textContent, 10);
        now_value -= 256;
        result.textContent = now_value;
    }
});
})();
