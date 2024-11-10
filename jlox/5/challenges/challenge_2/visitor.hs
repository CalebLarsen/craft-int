data Pastry =
  Donut |
  Tart  

instance Show Pastry where
  show :: Pastry -> String
  show Donut = "Donut"
  show Tart = "Tart"

instance Eq Pastry where
  (==) :: Pastry -> Pastry -> Bool
  (==) Donut Donut = True
  (==) Donut _ = False
  (==) Tart Tart = True
  (==) Tart _ = False
  (/=) :: Pastry -> Pastry -> Bool
  (/=) Donut Donut = False
  (/=) Donut _ = True
  (/=) Tart Tart = False
  (/=) Tart _ = True


main =
  print $ show $ Donut == Tart
  
