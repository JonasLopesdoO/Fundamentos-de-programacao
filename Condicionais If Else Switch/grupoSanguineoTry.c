#include <stdio.h>
int main(){
	
	char snestor, smae, spai, rhnestor, rhmae, rhpai;
	 	 char x[2] = "ab";
	 
	 scanf(" %c", &snestor);
	 scanf(" %c", &rhnestor);
	 scanf(" %c", &smae);
	 scanf(" %c", &rhmae);
	 scanf(" %c", &spai);
	 scanf(" %c", &rhpai);
	 
	
	
	//mae o pai o nestor o
	switch(smae){
	case 'o':
		switch(spai){
		case'o':
			switch(snestor){
			case'o':
			
			
			
			if(rhmae == '-'){
				
			}else if(rhpai == '-'){
				else if(rhnestor == '-'){
					printf("é o pai");	
					
				}else{
					printf("não é o pai");
				}
			}
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							
							default:
							printf("não\n");
							break;
							}
					
						
						case '+':
						printf("sim");
						break;
						}
					break;
					
				}
				 
			
			default:
			printf("não é pai");
			break;
			}
		case'a':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							
							default:
							printf("não\n");
							break;
							}
					
						
						case '+':
						printf("sim");
						break;
						}
					break;
					
				} 
			
			default:
			printf("não é pai");
			break;
			}	
		}		
	}
	/*
	//mae o pai a filho o
	switch(smae){
	case 'o':
		switch(spai){
		case'a':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							
							default:
							printf("não\n");
							break;
							}
					
						
						case '+':
						printf("sim");
						break;
						}
					break;
					
				} 
			
			default:
			printf("não é pai");
			break;
			}
		}		
	}
	//mae o pai a filho a
	switch(smae){
	case 'o':
		switch(spai){
		case'a':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							
							default:
							printf("não\n");
							break;
							}
					
						
						case '+':
						printf("sim");
						break;
						}
					break;
					
				} 
			
			default:
			printf("não é pai");
			break;
			}
		}		
	}
	
	//mae a pai o filho a
	switch(smae){
	case 'a':
		switch(spai){
		case'o':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	//mae a pai o filho o
	switch(smae){
	case 'a':
		switch(spai){
		case'o':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	
	//mae a pai a filho a
	switch(smae){
	case 'a':
		switch(spai){
		case'a':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}		
	//mae a pai a filho o
	switch(smae){
	case 'a':
		switch(spai){
		case'a':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	
	//mae o pai b filho o
	switch(smae){
	case 'o':
		switch(spai){
		case'b':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	//mae o pai b filho b
	switch(smae){
	case 'o':
		switch(spai){
		case'b':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	//mae b pai o filho o
	switch(smae){
	case 'b':
		switch(spai){
		case'o':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	//mae b pai o filho b
	switch(smae){
	case 'b':
		switch(spai){
		case'o':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	
	// mae b pai b filho o
	switch(smae){
	case 'b':
		switch(spai){
		case'b':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae b pai b filho b
	switch(smae){
	case 'b':
		switch(spai){
		case'b':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	
	// mae a pai b filho o
	switch(smae){
	case 'a':
		switch(spai){
		case'b':
			switch(snestor){
			case'o':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae a pai b filho a
	switch(smae){
	case 'a':
		switch(spai){
		case'b':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae a pai b filho b
	switch(smae){
	case 'a':
		switch(spai){
		case'b':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae a pai b filho ab
	switch(smae){
	case 'a':
		switch(spai){
		case'b':
			switch(snestor){
			case'x':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	
	// mae b pai a filho o
	switch(smae){
		case 'b':
			switch(spai){
			case'a':
				switch(snestor){
				case'o':
				
					switch(rhmae){
						case '+':
						printf("sim\n");
						break;
						case '-':
							switch(rhpai){	
							case '-':
								switch(rhnestor){
								case '-':
									printf("sim\n");
									break;
								case '+':
								printf("não\n");
								break;
								}
							break;
							
							case '+':
							printf("sim");
							break;
							}
						break;
						default:
						printf("não\n");
						}
			
			}
		}
	}
	// mae b pai a filho a
	switch(smae){
	case 'b':
		switch(spai){
		case'a':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae b pai a filho b
	switch(smae){
	case 'b':
		switch(spai){
		case'a':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae b pai a filho ab
	switch(smae){
	case 'b':
		switch(spai){
		case'a':
			switch(snestor){
			case'x':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}

	// mae o pai ab filho a
	switch(smae){
		case 'o':
			switch(spai){
			case'x':
				switch(snestor){
				case'a':
				
					switch(rhmae){
						case '+':
						printf("sim\n");
						break;
						case '-':
							switch(rhpai){	
							case '-':
								switch(rhnestor){
								case '-':
									printf("sim\n");
									break;
								case '+':
								printf("não\n");
								break;
								}
							break;
							
							case '+':
							printf("sim");
							break;
							}
						break;
						default:
						printf("não\n");
						}
			
			}
		}
	}
	// mae o pai ab filho b
	switch(smae){
	case 'o':
		switch(spai){
		case'x':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai o filho a
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai o filho b
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}

	// mae a pai ab filho a
	switch(smae){
	case 'a':
		switch(spai){
		case'x':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae a pai ab filho b
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae a pai ab filho ab
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai a filho a
	switch(smae){
	case 'a':
		switch(spai){
		case'x':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai a filho b
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai a filho ab
	switch(smae){
	case 'x':
		switch(spai){
		case'o':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}


	// mae b pai ab filho a
	switch(smae){
	case 'b':
		switch(spai){
		case'x':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae b pai ab filho b
	switch(smae){
	case 'b':
		switch(spai){
		case'x':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae b pai ab filho ab
	switch(smae){
	case 'b':
		switch(spai){
		case'x':
			switch(snestor){
			case'x':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai b filho a
	switch(smae){
	case 'x':
		switch(spai){
		case'b':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai b filho b
	switch(smae){
	case 'x':
		switch(spai){
		case'b':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai b filho ab
	switch(smae){
	case 'x':
		switch(spai){
		case'b':
			switch(snestor){
			case'x':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}

	// mae ab pai ab filho a
	switch(smae){
	case 'x':
		switch(spai){
		case'x':
			switch(snestor){
			case'a':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai ab filho b
	switch(smae){
	case 'x':
		switch(spai){
		case'x':
			switch(snestor){
			case'b':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
	// mae ab pai ab filho ab
	switch(smae){
	case 'x':
		switch(spai){
		case'x':
			switch(snestor){
			case'x':
			
				switch(rhmae){
					case '+':
					printf("sim\n");
					break;
					case '-':
						switch(rhpai){	
						case '-':
							switch(rhnestor){
							case '-':
								printf("sim\n");
								break;
							case '+':
							printf("não\n");
							break;
							}
						break;
						
						case '+':
						printf("sim");
						break;
						}
					break;
					default:
					printf("não\n");
					}
			
			}
		}
	}
*/


}
		
	


		
		






