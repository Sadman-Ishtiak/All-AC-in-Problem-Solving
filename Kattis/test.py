import itertools

# Define points for each result
WIN_POINTS = 3
DRAW_POINTS = 1
LOSS_POINTS = 0

# All possible outcomes for a single match:
# (points for team 1, points for team 2)
outcomes = [
    (WIN_POINTS, LOSS_POINTS),  # Team 1 wins
    (LOSS_POINTS, WIN_POINTS),  # Team 2 wins
    (DRAW_POINTS, DRAW_POINTS)  # Draw
]

# Generate all combinations of outcomes for 3 matches (A vs B, A vs C, B vs C)
score_combinations = set()  # Use a set to avoid duplicate score combinations
for (a_b, b_a), (a_c, c_a), (b_c, c_b) in itertools.product(outcomes, repeat=3):
    # Calculate total scores for each team
    score_a = a_b + a_c
    score_b = b_a + b_c
    score_c = c_a + c_b

    # Add the resulting score combination as a tuple
    score_combinations.add(str(sorted([score_a, score_b, score_c], reverse=True)))

# Display all unique score combinations
print("Possible unique score combinations:")
for i in sorted(score_combinations):
    print(i)