import random
from simulation_pkg import basic

def main():
    basic.load_model( "obstacle1", random.choice( basic.model_types) , basic.obstacle_coordinates1 )
    basic.load_model( "obstacle4", random.choice( basic.model_types) , basic.obstacle_coordinates_1 )
    basic.load_model( "obstacle5", random.choice( basic.model_types) , basic.obstacle_coordinates_2 )
    
    # For obstacle
    basic.load_model( "obstacle2", random.choice( basic.model_types) , basic.obstacle_coord( basic.obstacle_coordinates2 ) )
    basic.load_model( "obstacle3", random.choice( basic.model_types) , basic.obstacle_coord( basic.obstacle_coordinates3 ) )

if __name__ == "__main__":
    main()