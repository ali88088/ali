d<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>I Love You Saira</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            background: url('https://www.w3schools.com/w3images/lovers.jpg') no-repeat center center fixed;
            background-size: cover;
            font-family: 'Arial', sans-serif;
            height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            color: white;
            overflow: hidden;
        }

        .content {
            text-align: center;
            transform-style: preserve-3d;
            animation: rotate 10s infinite linear;
        }

        @keyframes rotate {
            0% { transform: rotateY(0deg); }
            100% { transform: rotateY(360deg); }
        }

        .heart {
            font-size: 120px;
            color: red;
            animation: pulse 1.5s infinite;
        }

        .message {
            font-size: 36px;
            font-weight: bold;
            letter-spacing: 2px;
            margin: 20px 0;
            font-family: 'Comic Sans MS', sans-serif;
            text-shadow: 3px 3px 8px rgba(0, 0, 0, 0.6);
        }

        @keyframes pulse {
            0% { transform: scale(1); }
            50% { transform: scale(1.2); }
            100% { transform: scale(1); }
        }

        .couple {
            position: absolute;
            bottom: 10%;
            left: 50%;
            transform: translateX(-50%) rotate(5deg);
            opacity: 0.7;
        }

        .couple img {
            width: 200px;
            height: auto;

