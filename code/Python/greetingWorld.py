#Greeting World with different Greeting Randomly

import random

greetings = ["Hello World!", "How are you? World", "What's up World?", "Long time no see World", "It's been ages World."]

print(greetings[random.randint(0, len(greetings)-1)])
