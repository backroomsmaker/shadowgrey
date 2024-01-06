#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void presentazione(){
	std::cout<<"         d8b                      d8b                                                                "<<std::endl;
	std::cout<<"         ?88                      88P                                                                "<<std::endl;
	std::cout<<"          88b                    d88                                                                 "<<std::endl;
	std::cout<<" .d888b,  888888b  d888b8b   d888888   d8888b  ?88   d8P  d8P     d888b8b    88bd88b d8888b?88   d8P "<<std::endl;
	std::cout<<" ?8b,     88P `?8bd8P' ?88  d8P' ?88  d8P' ?88 d88  d8P' d8P'    d8P' ?88    88P'  `d8b_,dPd88   88  "<<std::endl;
	std::cout<<"   `?8b  d88   88P88b  ,88b 88b  ,88b 88b  d88 ?8b ,88b ,88'     88b  ,88b  d88     88b    ?8(  d88  "<<std::endl;
	std::cout<<"`?888P' d88'   88b`?88P'`88b`?88P'`88b`?8888P' `?888P'888P'      `?88P'`88bd88'     `?888P'`?88P'?8b "<<std::endl;
	std::cout<<"                                                                        )88                       )88"<<std::endl;
	std::cout<<"                                                                       ,88P                      ,d8P"<<std::endl;
	std::cout<<"                                                                   `?8888P                    `?888P'"<<std::endl;
}

void foresta(){
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"███████████████████████████████████████████████████████████████████▓███▓████▓"<<std::endl;
std::cout<<"██████████████████████████████████████████████████████▓██▓████████▓▓██▓▓▓███▓"<<std::endl;
std::cout<<"▓███████████████████████████████████████▓██████▓▓██▓▓▓▓██▓███████▓▓▓██▓▓▓███▓"<<std::endl;
std::cout<<"▒▒▒▒██▒██████▒██▒█████▒▒██▒▒█████████▒██▒▒▒██▒▒▒▒██▒▒▒▒██▒▒▒▒██▒▒▒▒▒██▒▒▒███▒"<<std::endl;
std::cout<<"▒▒▒▒██▒▒▒██▒▒▒██▒▒▒██▒▒▒██▒▒▒▒██▒██▒▒▒██▒▒▒██▒▒▒▒██▒▒▒▒██▒▒▒▒██▒▒▒▒▒██▒▒▒███▒"<<std::endl;
std::cout<<"░░░░██░░░██░░░██░░░██░░░██░░░░██░██░░░██░░░██░░░░██░░░░██░░░░██░░░░░██░░░███░"<<std::endl;
std::cout<<"░░░░██░░░██░░░██░░░██░░░██░░░░██░██░░░██░░░██░░░░██░░░░██░░░░██░░░░░██░░░███░"<<std::endl;
std::cout<<"░░░░██░░░██░░░██░░░██░░░██░░░░██░██░░░██░░░██░░░░██░░░░██░░░░██░░░░░██░░░███░"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
std::cout<<"█████████████████████████████████████████████████████████████████████████████"<<std::endl;
}

void gameover(){
std::cout<<" ▄▄ •  ▄▄▄· • ▌ ▄ ·. ▄▄▄ .         ▌ ▐·▄▄▄ .▄▄▄  "<<std::endl;  
std::cout<<"▐█ ▀ ▪▐█ ▀█ ·██ ▐███▪▀▄.▀·   ▄█▀▄ ▪█·█▌▀▄.▀·▀▄ █·"<<std::endl;
std::cout<<"▄█ ▀█▄▄█▀▀█ ▐█ ▌▐▌▐█·▐▀▀▪▄  ▐█▌.▐▌▐█▐█•▐▀▀▪▄▐▀▀▄ "<<std::endl;
std::cout<<"▐█▄▪▐█▐█▪ ▐▌██ ██▌▐█▌▐█▄▄▌  ▐█▌.▐▌ ███ ▐█▄▄▌▐█•█▌"<<std::endl;
std::cout<<"·▀▀▀▀  ▀  ▀ ▀▀  █▪▀▀▀ ▀▀▀    ▀█▄▀▪. ▀   ▀▀▀ .▀  ▀"<<std::endl;
}

void pausa() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

int main(){
	int scelta;
	std::cout<<""<<std::endl;
	std::cout<<"Benvenuto nello Shadow Grey"<<std::endl;
	std::cout<<""<<std::endl;
	pausa();
	std::cout<<"Questa volta non sarai da solo."<<std::endl;
	std::cout<<""<<std::endl;
	pausa();
	std::cout<<"Gestirai un intero team del M.E.G."<<std::endl;
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"L'obiettivo è analizzare lo Shadow Grey"<<std::endl;
	std::cout<<"ed uscirne vivi."<<std::endl;
	pausa();
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"    Jashin L. presenta"<<std::endl;
	pausa();
	pausa();
	presentazione();
	pausa();
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<"Prima di entrare nella foresta"<<std::endl;
	std::cout<<"gli esploratori raccolgono informazioni sulle creature notturne"<<std::endl;
	std::cout<<"e preparano kit di sopravvivenza con fonti di luce, cibo e acqua."<<std::endl;
	pausa();
	std::cout<<"Preparano anche trappole di sicurezza e allarmi silenziosi"<<std::endl;
	std::cout<<"per avvertire di movimenti nelle vicinanze durante il riposo."<<std::endl;
	std::cout<<""<<std::endl;
	pausa();
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<"Come vuoi iniziare?"<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"1. Prepara un accampamento."<<std::endl;
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<"2. Esplora i dintorni."<<std::endl;
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<"3. Addentrati nella foresta."<<std::endl;
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<"4. Dividi le squadre."<<std::endl;
	pausa();
	std::cout<<""<<std::endl;
	std::cout<<""<<std::endl;
	std::cin>>scelta;
	switch (scelta){
		int a;
		case 1:
			std::cout<<""<<std::endl;
			std::cout<<"Gli esploratori scelgono una radura nascosta"<<std::endl;
			std::cout<<"referibilmente elevata o difficile da raggiungere per le creature del suolo."<<std::endl;
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Si assicurano che non ci siano segni di predatori o entità nelle vicinanze, cercando tracce, nidi o resti di cibo."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Usando materiali naturali come rami, foglie e muschio,"<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			std::cout<<"costruiscono rifugi sospesi tra gli alberi, collegati con corde e scale."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<" I rifugi sono piccoli e mimetizzati, sufficienti per dormire o osservare senza essere notati."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"<<Per ora siamo al sicuro no?>>"<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"<<Non basta, dovremmo fare di più, il problema è quando cala la notte.>>"<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"1. Ispeziona la sicurezza perimetrale."<<std::endl;
			std::cout<<"2. Prepara un piano di fuga."<<std::endl;
			std::cout<<""<<std::endl;
			std::cin>>a;
			switch(a){
				int vita;
				PERIMETRO:case 1:
						std::cout<<""<<std::endl;
						std::cout<<" Intorno al sito, dispongono trappole rumorose come lattine o rami secchi che, se calpestati, emetteranno suoni per avvisare di intrusi."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Alcuni posizionano segnali luminosi o chimici a distanza, per identificare rapidamente la direzione di un possibile attacco."<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"1. Manda tutta la squadra a dormire per la notte."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Prepara dei turni di guardia."<<std::endl;
						std::cin>>a;
						switch(vita){
							int quadrato;
							case 1:
									std::cout<<""<<std::endl;
									std::cout<<"La quiete della notte è rotta da un fruscio improvviso. Una serie di trappole perimetrali si attiva, creando una cascata di suoni metallici."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Gli esploratori si svegliano immediatamente, conscio che qualcosa si sta avvicinando."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Purtroppo essendo stati tutti colti nel sonno perdono molto tempo nel prepararsi."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"1. Disponi gli agenti che sono riusciti a prepararsi."<<std::endl;
									std::cout<<"2. Inizia una fuga disperata."<<std::endl;
									std::cin>>quadrato;
									switch(quadrato){
										int lotta;
										case 1:
												std::cout<<""<<std::endl;
												std::cout<<"Dall'alto dei loro rifugi, cercano di identificare la minaccia usando visori notturni o ascoltando attentamente."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Il nemico potrebbe essere una creatura nota per la sua furtività, appena visibile tra gli alberi, muovendosi rapidamente e silenziosamente."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Non c'è tempo per un piano elaborato; il gruppo forma rapidamente un cerchio, spalle contro spalle, con le armi pronte."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<"Alcuni impugnano armi da mischia rinforzate, altri preparano dispositivi di difesa a distanza, come archi o pistole con munizioni speciali."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Le creature attaccano con un urlo assordante, muovendosi velocemente tra gli alberi."<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Sono veloci e coordinate, attaccando da più direzioni per disorientare e separare il gruppo."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<"Gli esploratori rispondono con una raffica di colpi, cercando di mantenere una difesa solida."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"1. Prova a scappare nel bosco."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<"2. Tenta di uccidere tutte le creature."<<std::endl;
												std::cin>>lotta;
												switch(lotta){
													int last;
													case 1:
															std::cout<<""<<std::endl;
															std::cout<<"Dopo un feroce scontro, e con numerose creature abbattute o disorientate, il gruppo coglie l'opportunità di ritirarsi."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Si muovono rapidamente, coprendo la ritirata con fuochi di copertura e fumogeni"<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Nonostante le ferite e la stanchezza, ogni passo li porta più lontano dal pericolo immediato."<<std::endl;
															pausa();
															std::cout<<"1. Riposate e raggruppatevi."<<std::endl;
															pausa();
															std::cout<<"2. Caricate contro le creature."<<std::endl;
															std::cin>>last;
															switch(last){
																int cho;
																case 1:
																	std::cout<<""<<std::endl;
																	std::cout<<"Una volta raggiunta una zona relativamente sicura, il gruppo si ferma per curare i feriti, riparare l'equipaggiamento e riflettere sulla battaglia."<<std::endl;
																	std::cout<<""<<std::endl;
																	pausa();
																	std::cout<<"La tensione è alta e la perdita è tangibile, ma sono sopravvissuti."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<" Ora, più che mai, comprendono la pericolosità della Foresta Crepuscolare e l'importanza di rimanere uniti e preparati per affrontare le minacce."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<"1. Attendi la fine della notte."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<"2. Prova a proseguire."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cin>>cho;
																	switch(cho){
																		case 1:
																			std::cout<<" Approfittando di una breve pausa dalla costante minaccia delle creature notturne, il gruppo trova un piccolo chiaro apparentemente tranquillo. "<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<"Con la stanchezza che preme sulle loro spalle e le menti annebbiate dalla tensione continua, decidono di concedersi un breve riposo, forse troppo fiduciosi nella sicurezza apparente del luogo."<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			std::cout<<"Nel cuore della notte, mentre la luna filtra debolmente attraverso le foglie, la foresta si anima in un modo terribile."<<std::endl;
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<"Le creature, forse attratte dalla presenza del gruppo o semplicemente cacciatrici notturne, convergono silenziosamente."<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<"I primi urli squarciano la notte, svegliando brutalmente gli esploratori."<<std::endl;
																			std::cout<<"Sono circondati, con poco tempo per reagire."<<std::endl;
																			std::cout<<"Alcuni afferrano disperatamente le armi, mentre altri sono troppo lenti, ancora intrappolati nei confini del sonno."<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			std::cout<<"Nonostante i loro sforzi, gli esploratori sono superati in numero e forza."<<std::endl;
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<"Uno dopo l'altro, cadono sotto l'assalto implacabile."<<std::endl;
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<"Gli ultimi momenti sono un turbinio di grida, denti e oscurità."<<std::endl;
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<" Infine l'implacabile rumore della battaglia che ha sconvolto la foresta torna silenzioso."<<std::endl;
																			std::cout<<""<<std::endl;
																			gameover();
																			exit(0);
																		PORTALE:case 2: 
																			std::cout<<"Mentre navigano nel folto del bosco, uno degli esploratori inciampa quasi su un piatto di pietra seminterrato."<<std::endl;
																			pausa();
																			std::cout<<"Pulendo via foglie e detriti, rivela un disegno complesso inciso sulla superficie, una sorta di mandala o simbolo arcano che non assomiglia a nulla di naturale o casuale."<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			std::cout<<"Vengono risucchiati dal terreno su cui è posto il disegno tramite il no-clip"<<std::endl;
																			std::cout<<""<<std::endl;
																			pausa();
																			std::cout<<""<<std::endl;
																			std::cout<<"Complimenti sei riuscito a sopravvivere."<<std::endl;
																			std::cout<<""<<std::endl;
																			exit(0);
																	}
																case 2: 
																	std::cout<<""<<std::endl;
																	std::cout<<"Nella confusione, il gruppo cerca di difendersi."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<"Le luci delle torce danzano freneticamente tra gli alberi, gettando ombre inquietanti."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<"I colpi sono frenetici e disordinati, ma le creature sono implacabili, avanzando con occhi famelici e artigli pronti."<<std::endl;
																	std::cout<<""<<std::endl;
																	std::cout<<"Purtroppo dopo pochi minuti il gruppo viene annientato."<<std::endl;
																	gameover();
																	exit (0);
															}
													case 2: 
															std::cout<<""<<std::endl;
															std::cout<<"Ogni membro del gruppo combatte con ferocia, sapendo che la sopravvivenza dipende dalla tenuta della loro difesa."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<" Le creature sono resistenti e numerose, ma gli esploratori usano ogni abilità e strumento a loro disposizione."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<" Grida di battaglia, il suono di colpi e ruggiti riempiono l'aria."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Man mano che la battaglia continua, alcuni esploratori vengono feriti, e la stanchezza inizia a farsi sentire."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<" La disperazione si fa strada, ma il gruppo rimane determinato a non cedere."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Usano trappole, fuoco e ogni tattica possibile per tenere a bada l'orda."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Nonostante i loro sforzi, gli esploratori sono superati in numero e forza. "<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Uno dopo l'altro, cadono sotto l'assalto implacabile."<<std::endl;
															pausa();
															std::cout<<""<<std::endl;
															std::cout<<"Gli ultimi momenti sono un turbinio di grida, denti e oscurità."<<std::endl;
															gameover();
															exit(0);
												}
										case 2: 
												std::cout<<""<<std::endl;
												std::cout<<"Gli esploratori si svegliano nel panico, afferrando gli zaini di emergenza già pronti."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<" Uno sguardo ai compagni è sufficiente per comunicare la gravità della situazione."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Non c'è tempo per una difesa organizzata; devono fuggire ora."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<"Lasciano i rifugi, scivolando giù dalle corde o correndo lungo i rami più bassi, dirigendosi verso il percorso di fuga più vicino. "<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<"Purtroppo le creature sono troppo veloci e i membri del gruppo vengono sterminati rapidamente dalle creature."<<std::endl;
												std::cout<<""<<std::endl;
												gameover();
												exit(0);
									}
							int triangolo;
							GUARDIA:case 2: 
									std::cout<<""<<std::endl;
									std::cout<<"Prima di accamparsi, il gruppo tiene una breve riunione per assegnare i turni di guardia."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Decidono chi farà la guardia e per quanto tempo, basandosi sulle abilità individuali e sul livello di stanchezza."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Idealmente, ogni turno dura circa due ore, per evitare l'affaticamento e mantenere l'attenzione alta."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia è dotata di un sistema di allerta, come un fischietto o un dispositivo luminoso, per segnalare il risveglio immediato del resto del gruppo in caso di pericolo."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Accordano anche un segnale per il cambio silenzioso dei turni."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"La guardia iniziale, spesso la più riposata, prende posto. La loro responsabilità è quella di monitorare attentamente i dintorni, ascoltando ogni rumore sospetto e osservando per eventuali movimenti o luci anomale."<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" Man mano che la notte avanza, i turni si susseguono."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia sveglia silenziosamente la successiva al termine del proprio turno, passando qualsiasi informazione rilevante o variazione nell'ambiente circostante."<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<"Questo momento di passaggio è cruciale e viene fatto con cautela per non attirare l'attenzione."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<" L'ultima guardia prima dell'alba ha il compito di preparare il gruppo per il movimento all'alba."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Le guardie mantengono un profilo basso, muovendosi silenziosamente e comunicando solo quando necessario."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" L'obiettivo è evitare di attirare l'attenzione o di svegliare inutilmente il resto del gruppo."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Per evitare la prevedibilità, le guardie cambiano posizione regolarmente, muovendosi tra punti prestabiliti che offrono una buona visuale dell'accampamento e dei suoi dintorni."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia rimane in stato di allerta costante, pronta a svegliare il gruppo o a difendere l'accampamento."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Portano con sé armi pronte all'uso e tutti i dispositivi di illuminazione o di allarme necessari."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"1. Esplora il resto del bosco alle prime luci dell'alba."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"2. Approfitta delle ultime ore di notte per verificare i fenomeni notturni."<<std::endl;
									std::cin>>triangolo;
									switch(triangolo){
										case 1:
												std::cout<<""<<std::endl;
												std::cout<<"Il cambio repentino di illuminazione dopo il ciclo di 12 ore aiuta il gruppo."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<"Decidono di incamminarsi con il favore della luce verso il resto del bosco."<<std::endl;
												std::cout<<""<<std::endl;
												goto PORTALE;
										case 2: 
												std::cout<<""<<std::endl;
												std::cout<<" La notte è insolitamente silenziosa."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												pausa();
												std::cout<<" I rumori abituali della foresta sembrano soffocati, come se la natura stessa trattenesse il fiato."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												pausa();
												std::cout<<"Questa quiete innaturale non sfugge agli esploratori, ma la stanchezza e la falsa sicurezza del loro accampamento li rendono meno vigili di quanto dovrebbero."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<" Improvvisamente, la quiete è infranta da un suono sordo e rapido, quasi impercettibile, come di qualcosa che si muove con agilità tra gli alberi. "<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												pausa();
												std::cout<<"Prima che possano reagire o svegliarsi completamente, figure oscure e veloci irrompono nel perimetro dell'accampamento."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<" Le creature attaccano con una velocità e ferocia terrificanti."<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												pausa();
												std::cout<<"Sono entità della foresta, perfettamente adattate al suo ambiente oscuro e capace di muoversi in silenzio mortale."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<" In pochi, intensi momenti, il destino del gruppo è sigillato."<<std::endl;
												pausa();
												pausa();
												std::cout<<""<<std::endl;
												std::cout<<"Le creature, con una brutalità efficiente, eliminano un esploratore dopo l'altro. "<<std::endl;
												std::cout<<""<<std::endl;
												pausa();
												pausa();
												std::cout<<" Non c'è tempo per piani di fuga o contromisure; l'attacco è troppo rapido, troppo inaspettato."<<std::endl;
												std::cout<<""<<std::endl;
												std::cout<<"Dopo che le creature si sono ritirate, l'accampamento è un quadro di distruzione e del gruppo ormai non resta nulla."<<std::endl;
												gameover();
												exit(0);
									}
						}
				int vita1;
				case 2: 
						std::cout<<""<<std::endl;
						std::cout<<"Conscio del tempo limitato, il gruppo si riunisce per una veloce valutazione della situazione."<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"Discutono le informazioni che hanno raccolto durante il giorno riguardo ai percorsi possibili, ai segnali lasciati da eventuali esploratori precedenti, e alle aree che sembrano meno dense o pericolose."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Ogni membro del gruppo riceve un compito specifico. Alcuni saranno incaricati di navigare, altri di portare le provviste essenziali, mentre altri ancora saranno responsabili della difesa."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Purtroppo dopo pochi minuti dall'inizio della notte la sentinella dà l'allarme, i mostri della foresta stanno caricando."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"1. Scappa nella foresta."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Combatti la minaccia."<<std::endl;
						pausa();
						std::cin>>vita1;
						switch(vita1){
							case 1:
									std::cout<<""<<std::endl;
									std::cout<<"Il gruppo si dirige nel sentiero all'interno della foresta come da piano."<<std::endl;
									std::cout<<""<<std::endl;
									goto PORTALE;
							case 2: 
									std::cout<<""<<std::endl;
									std::cout<<"In pochi, intensi momenti, il destino del gruppo è sigillato."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Le creature, con una brutalità efficiente, eliminano un esploratore dopo l'altro."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Non c'è tempo per piani di fuga o contromisure; l'attacco è troppo rapido, troppo inaspettato."<<std::endl;
									gameover();
									exit(0);
						}
			}
		int b;
		case 2:
			std::cout<<""<<std::endl;
			std::cout<<" Prima di partire, il gruppo si equipaggia con zaini contenenti il necessario per un'esplorazione diurna: acqua, cibo, mappe, bussola, binocoli e strumenti di registrazione."<<std::endl;
			std::cout<<"Controllano anche le armi e gli strumenti di difesa, conscio che la foresta può nascondere pericoli anche di giorno."<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Lasciano l'accampamento, marcandolo accuratamente per poterlo ritrovare. "<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<" Utilizzano nastri colorati, segni su alberi o pietre, o coordinate GPS per assicurarsi di poter tornare senza problemi."<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Mentre si muovono, mappano attentamente l'area circostante, annotando caratteristiche distintive come grandi alberi, formazioni rocciose o corsi d'acqua. "<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Osservano anche segni di passaggio di animali o altre entità, cercando di identificare possibili minacce o risorse."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<"Valutano la stabilità del terreno, la presenza di percorsi naturali e la densità della vegetazione."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<" Queste informazioni sono cruciali per pianificare spostamenti futuri, soprattutto se dovessero trovarsi a dover fuggire o spostarsi rapidamente."<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Concludono l'esplorazione prima che il sole inizi a calare, assicurandosi di lasciare tempo sufficiente per tornare al campo con luce diurna."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Mentre tornano, ripercorrono i segni lasciati e discutono dei ritrovamenti e delle osservazioni fatte."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"1. Invia informazioni tramite la radio"<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"2. Discuti con il gruppo delle scoperte"<<std::endl;
			std::cout<<""<<std::endl;
			std::cin>>b;
			switch(b){
				int opzione;
				COMUNICAZIONI:case 1:
						std::cout<<"Una volta pronti, iniziano le trasmissioni periodiche o programmate."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<" <<Base, qui Squadra Esplorativa Shadow Grey.>>"<<std::endl;
						pausa();
						std::cout<<"<<niziamo il nostro report giornaliero delle scoperte.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Passo.>>"<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"Forniscono dettagliati aggiornamenti sulle loro attività, scoperte e osservazioni."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"<<Abbiamo mappato altri 2 chilometri quadrati della foresta, trovando varie fonti d'acqua e possibili sentieri.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Nessun nuovo incontro con entità, ma continuiamo a trovare segni di presenza non identificata.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Attendono una conferma che le loro trasmissioni siano state ricevute."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"<<Squadra Esplorativa Shadow Grey, qui base>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Informazioni trasmesse ricevute, ripeto informazioni trasmesse ricevute. >>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Mantenete la posizione e procedete con cautela.>>"<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"<<Passo>>"<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"Al termine delle loro esplorazioni giornaliere, trasmettono un ultimo report."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"<<Base, qui Squadra Esplorativa Shadow Grey>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<concludiamo le trasmissioni per oggi.>>"<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"<<Torneremo domani con ulteriori aggiornamenti.>>"<<std::endl;
						std::cout<<"<<Manteniamoci forti e continuiamo a esplorare.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Passo e chiudo.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"1. Prepara turni di guardia."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Porta tutti a dormire."<<std::endl;
						std::cin>>opzione;
						switch(opzione){
							CONTROLLO:case 1:
									std::cout<<""<<std::endl;
									std::cout<<"Prima di accamparsi, il gruppo tiene una breve riunione per assegnare i turni di guardia."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Decidono chi farà la guardia e per quanto tempo, basandosi sulle abilità individuali e sul livello di stanchezza."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Idealmente, ogni turno dura circa due ore, per evitare l'affaticamento e mantenere l'attenzione alta."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia è dotata di un sistema di allerta, come un fischietto o un dispositivo luminoso, per segnalare il risveglio immediato del resto del gruppo in caso di pericolo."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Accordano anche un segnale per il cambio silenzioso dei turni."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"La guardia iniziale, spesso la più riposata, prende posto. La loro responsabilità è quella di monitorare attentamente i dintorni, ascoltando ogni rumore sospetto e osservando per eventuali movimenti o luci anomale."<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" Man mano che la notte avanza, i turni si susseguono."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia sveglia silenziosamente la successiva al termine del proprio turno, passando qualsiasi informazione rilevante o variazione nell'ambiente circostante."<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<"Questo momento di passaggio è cruciale e viene fatto con cautela per non attirare l'attenzione."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<" L'ultima guardia prima dell'alba ha il compito di preparare il gruppo per il movimento all'alba."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Le guardie mantengono un profilo basso, muovendosi silenziosamente e comunicando solo quando necessario."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" L'obiettivo è evitare di attirare l'attenzione o di svegliare inutilmente il resto del gruppo."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Per evitare la prevedibilità, le guardie cambiano posizione regolarmente, muovendosi tra punti prestabiliti che offrono una buona visuale dell'accampamento e dei suoi dintorni."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Ogni guardia rimane in stato di allerta costante, pronta a svegliare il gruppo o a difendere l'accampamento."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Portano con sé armi pronte all'uso e tutti i dispositivi di illuminazione o di allarme necessari."<<std::endl;
									pausa();
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Purtroppo l'eccessiva stanchezza dell'esplorazione ha il sopravvento e le guardie non riescono a dare in tempo l'allarme per i mostri in arrivo."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Il gruppo viene divorato in pochissimi minuti senza poter reagire."<<std::endl;
									std::cout<<""<<std::endl;
									gameover();
									exit(0);
							RIPOSO:case 2: 
									std::cout<<""<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Purtroppo l'eccessiva stanchezza dell'esplorazione ha il sopravvento e le guardie non riescono a dare in tempo l'allarme per i mostri in arrivo."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Il gruppo viene divorato in pochissimi minuti senza poter reagire."<<std::endl;
									std::cout<<""<<std::endl;
									gameover();
									exit(0);
						}
				int opzione1;
				case 2: 
						std::cout<<"Mentre si siedono intorno a un fuoco di campo o in una tenda comune, uno degli esploratori prende la parola."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"<<Bene, è stato un lungo giorno. \nPrima che cali completamente la notte, dobbiamo discutere di ciò che abbiamo trovato e decidere i nostri prossimi passi."<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"Ognuno a turno condivide le proprie osservazioni e scoperte."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Un esploratore descrive un nuovo sentiero che hanno mappato, un altro parla di strani segni sugli alberi che potrebbero indicare la presenza di creature o di altri esploratori. "<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Qualcuno potrebbe mostrare un campione di pianta o di roccia sconosciuta trovata lungo il percorso."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Dopo ogni relazione, il gruppo discute del possibile significato o delle implicazioni delle scoperte. "<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<"<<Quei segni sugli alberi sembrano troppo regolari per essere naturali. \n Potrebbe essere un codice o un avvertimento?>>"<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"<<La pianta che hai trovato ha proprietà simili a quelle medicinali conosciute, ma dobbiamo fare attenzione a possibili tossicità.>>"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"Considerano i potenziali rischi e benefici di esplorare ulteriormente aree o fenomeni specifici."<<std::endl;
						pausa();
						std::cout<<"Discutono se vale la pena tornare in determinati luoghi con maggiore equipaggiamento o se alcune zone dovrebbero essere evitate per la sicurezza del gruppo."<<std::endl;
						pausa();
						pausa();
						std::cout<<"Basandosi sulla discussione, iniziano a pianificare le attività del giorno successivo."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<""<<std::endl;
						std::cout<<" Decidono chi esplorerà quali aree, chi raccoglierà ulteriori informazioni su particolari fenomeni, e come allocare le risorse tra i membri del gruppo."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						pausa();
						pausa();
						std::cout<<"Alcuni potrebbero esprimere preoccupazioni o timori riguardo alle sfide incontrate o quelle imminenti."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"È un momento per il gruppo di offrire supporto morale e riaffermare il loro impegno a lavorare insieme."<<std::endl;
						pausa();
						std::cout<<"<<So che questi segni sono inquietanti, ma siamo qui per scoprire e comprendere. \n Siamo un buon team e ce la faremo.>>"<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Concludono la discussione con un piano d'azione per il giorno seguente e iniziano a prepararsi per la notte"<<std::endl;
						pausa();
						std::cout<<"stabilendo i turni di guardia e assicurandosi che tutto sia pronto per un riposo sicuro."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"1. Prepara turni di guardia."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Fai riposare il gruppo."<<std::endl;
						pausa();
						std::cin>>opzione1;
						switch(opzione1){
							case 1:
									goto CONTROLLO;
							case 2: 
									goto RIPOSO;
						}
			}
		int c;
		case 3:
			foresta();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<" Muovendosi come un'entità unica, il gruppo penetra la foresta."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Ogni passo è ponderato, ogni movimento è calcolato. I suoni della foresta - il cinguettio degli uccelli, il fruscio delle foglie, il lontano scroscio di un corso d'acqua - sono un costante sottofondo, ma vengono ascoltati con cautela, alla ricerca di anomalie."<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Mentre avanzano, uno degli esploratori segna la loro rotta su una mappa, mentre un altro documenta ogni caratteristica interessante: una formazione rocciosa insolita, un albero con un tronco particolarmente largo, fiori o frutti mai visti."<<std::endl;
			std::cout<<"I campioni vengono raccolti con attenzione, inseriti in sacchetti sigillati per l'analisi."<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"L'aria è umida e pesante, carica di odori terrosi e di decomposizione."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"La luce è flebile, filtrata dalle foglie in un eterno crepuscolo."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<" Ogni tanto, il gruppo si ferma per ascoltare, sentendo lontani rombi o il fruscio di qualcosa che si muove velocemente tra gli alberi."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<" Lungo il cammino, individuano possibili risorse - una chiara sorgente d'acqua, frutti commestibili, materiali utili per l'accampamento. \n Ma ogni risorsa è valutata contro i potenziali rischi; nulla è preso senza prima assicurarsi che sia sicuro."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<" il gruppo si dirige verso il campo base, seguendo i segni che hanno lasciato o utilizzando la bussola per orientarsi. \n La tensione cresce con l'oscurità, e l'ultimo tratto è percorso con un rinnovato senso di urgenza."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"1. Comunica le scoperte via radio."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"2. Prepara il perimetro."<<std::endl;
			std::cout<<""<<std::endl;
			std::cin>>c;
			switch(c){
				int esagono;
				case 1:
						std::cout<<""<<std::endl;
						std::cout<<"Gli strumenti sembrano malfunzionanti."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"1. Prova a farli ripartire"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Prepara il perimetro"<<std::endl;
						std::cin>>esagono;
						switch(esagono){
							case 1:
									goto COMUNICAZIONI;
							case 2: 
									goto PERIMETRO;
						}
				int ennagono;
				case 2: 
						std::cout<<""<<std::endl;
						std::cout<<"I membri sembrano essere richiamati da una voce della foresta."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"1. Concentrati sul perimetro"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Segui la voce"<<std::endl;
						std::cin>>ennagono;
						switch(ennagono){
							case 1:
									goto PERIMETRO;
							case 2: 
									goto PORTALE;
						}
			}
		int d;
		case 4:
			std::cout<<""<<std::endl;
			std::cout<<"Mentre una parte del gruppo si occupa del campo, gli altri continuano l'esplorazione della foresta."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<"Sono equipaggiati per una breve escursione, portando con sé l'essenziale: acqua, cibo, kit di primo soccorso, mappe, strumenti di navigazione, e naturalmente, dispositivi di comunicazione per mantenere il contatto con il campo base."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<"Procedono con cautela, mappando l'area, osservando flora e fauna e registrando qualsiasi anomalia o punto di interesse. "<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<"Prestano particolare attenzione a segni di pericolo, come tracce di creature o cambiamenti improvvisi nell'ambiente."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Se durante la loro esplorazione trovano risorse utili - come cibo, acqua o materiali - le raccolgono per portarle al campo."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Sono attenti a non disturbare troppo l'ambiente o a prendere rischi inutili per ottenere queste risorse."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<" Prima che cali troppo il sole, il gruppo di esplorazione inizia a fare ritorno al campo, seguendo i segni lasciati o utilizzando le loro mappe e strumenti di navigazione. "<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"Comunicano la loro posizione e il loro arrivo previsto al gruppo al campo."<<std::endl;
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Una volta che tutti sono riuniti al campo, i gruppi condividono le informazioni raccolte."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<"Gli esploratori parlano delle aree mappate, delle risorse trovate e di qualsiasi pericolo potenziale, mentre coloro che sono rimasti al campo discutono delle difese e delle strutture che hanno costruito."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			pausa();
			std::cout<<"Con le nuove informazioni a disposizione, il gruppo inizia a pianificare le attività del giorno successivo, decidendo se spostare il campo, come sfruttare le risorse trovate o come continuare l'esplorazione in sicurezza."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Mentre la notte cala sulla foresta, il gruppo finisce i preparativi. "<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Controllano le difese, organizzano i turni di guardia, cenano e cercano di riposarsi, pronti per affrontare un altro giorno di sfide"<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			pausa();
			std::cout<<"1. Controlla il perimetro."<<std::endl;
			std::cout<<""<<std::endl;
			std::cout<<"2. Manda a dormire coloro che hanno esplorato."<<std::endl;
			std::cin>>d;
			switch(d){
				int lol;
				case 1:
						std::cout<<""<<std::endl;
						std::cout<<"Il gruppo si divide in coppie o piccoli team, ciascuno incaricato di ispezionare una sezione specifica del perimetro del campo."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						pausa();
						std::cout<<"Si assicurano che ogni team abbia almeno una persona con esperienza in navigazione o tattiche di sopravvivenza."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						pausa();
						std::cout<<"1. Metti dei turni di guardia"<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Manda tutti a dormire"<<std::endl;
						std::cin>>lol;
						switch(lol){
							case 1:
									goto CONTROLLO;
							case 2: 
									std::cout<<"Purtroppo con nessuno di guardia i mostri colgono il gruppo nel sonno."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Nessuno di loro riesce a reagire."<<std::endl;
									std::cout<<""<<std::endl;
									gameover();
									exit(0);
						}
				int lmao;		
				case 2: 
						std::cout<<""<<std::endl;
						std::cout<<"I mostri attaccano non appena inizia la notte."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Fortunatamente gli agenti di guardia sono ben riposati e portano gli esploratori con loro lontano dall'accampamento."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"1. Dirigiti nel bosco."<<std::endl;
						std::cout<<""<<std::endl;
						std::cout<<"2. Ritorna dall'accampamento."<<std::endl;
						std::cin>>lmao;
						switch(lmao){
							case 1:
									goto PORTALE;
							case 2: 
									std::cout<<""<<std::endl;
									std::cout<<"Dopo l'attacco improvviso, gli esploratori sopravvissuti, feriti e scossi, si affrettano a tornare al campo base, spinti dalla speranza di sicurezza e dalla necessità di cure mediche. La loro marcia è frenetica e disordinata, segnata dalla paura e dal dolore."<<std::endl;
									pausa();
									pausa();
									std::cout<<"Mentre il gruppo in fuga si avvicina al campo, il rumore e il disordine della loro marcia attirano l'attenzione di altre creature o entità della foresta, che seguono o circondano il gruppo."<<std::endl;
									std::cout<<""<<std::endl;
									pausa();
									std::cout<<"Gli esploratori al campo sentono l'avvicinarsi del caos e si preparano come possono, ma la stanchezza e la sorpresa li rendono meno efficaci."<<std::endl;
									std::cout<<""<<std::endl;
									std::cout<<"Le creature della foresta lanciano un attacco coordinato sia contro il gruppo in fuga che contro il campo base."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"La lotta è feroce e disperata, ma gli esploratori sono troppo pochi, troppo stanchi e troppo spaventati per montare una difesa efficace. "<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Nonostante i loro sforzi, uno dopo l'altro vengono sopraffatti."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" Il silenzio torna nella foresta, rotto solo dal respiro affannoso dei sopravvissuti e dai suoni della notte."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" Il campo base è un disastro: tende strappate, equipaggiamento distrutto e, il più grave di tutti, i corpi degli esploratori che giacciono sparsi, testimonianza della violenza dell'attacco."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<" I pochi che sono rimasti vivi si rendono conto della totale disfatta."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Ora devono affrontare non solo il lutto per i compagni caduti, ma anche la terribile realtà che la foresta potrebbe non lasciarli mai scappare. "<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Senza forze sufficienti per tentare un'altra fuga o per continuare a esplorare, si trovano a dover affrontare la notte con una consapevolezza amara della loro vulnerabilità."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"Purtroppo le creature non aspettano altro e prendono il sopravvento."<<std::endl;
									pausa();
									std::cout<<""<<std::endl;
									std::cout<<"I restanti sopravvissuti vengono divorati nel cuore della notte."<<std::endl;
									gameover();
									exit(0);
						}
			}
	}
	return 0;
}
