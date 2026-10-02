import sys
import time
import os

# Colors
CYAN = "\033[96m"
PINK = "\033[95m"
YELLOW = "\033[93m"
GREEN = "\033[92m"
WHITE = "\033[97m"
RED = "\033[91m"
RESET = "\033[0m"

# Lyrics: (text, typing speed, pause after line)
lyrics = [
    (PINK + "🌸 Tu saanwal phull kastoori... 🌸" + RESET, 0.08, 0.8),
    (CYAN + "✨ Tedi thi gayi bahu mash-hoori... ✨" + RESET, 0.08, 0.8),

    (WHITE + "🤍 Juha jha te, har jha te... 🤍" + RESET, 0.07, 0.7),
    (YELLOW + "🌟 Paye dende lok misaal... 🌟" + RESET, 0.08, 1.1),

    (PINK + "💫 Chalray chalray waal... 💫" + RESET, 0.09, 0.7),
    (CYAN + "🖤 Mondhe rakhdae kaali shawl... 🖤" + RESET, 0.08, 0.8),
    (RED + "❤️ Hath chenae ratta rumaal... ❤️" + RESET, 0.08, 0.9),

    (GREEN + "✨ Teriyan reesaan kaun kare... ✨" + RESET, 0.09, 1.4),
    (PINK + "💖 Ve teriyan reesaan kaun kare... 💖" + RESET, 0.09, 1.5)
]

# Clear terminal
os.system("cls" if os.name == "nt" else "clear")

time.sleep(0.5)

# Small animated intro
print("\n")

for emoji in ["🎵", "🎶", "✨", "💖", "✨", "🎶", "🎵"]:
    print(emoji, end=" ", flush=True)
    time.sleep(0.25)

time.sleep(0.5)

# Heading
print("\n")
print(PINK + "=" * 50 + RESET)
print(YELLOW + "          🎵✨ CHALRAY WAAL ✨🎵" + RESET)
print(PINK + "=" * 50 + RESET)

time.sleep(1)

print()

# Animated lyrics
for text, char_speed, pause in lyrics:

    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(char_speed)

    print()
    time.sleep(pause)

# Ending
print()
print(PINK + "=" * 50 + RESET)

time.sleep(0.5)

print("\n", end="")

for emoji in ["💖", "✨", "🎶", "✨", "💖"]:
    print(emoji, end=" ", flush=True)
    time.sleep(0.3)

print("\n")