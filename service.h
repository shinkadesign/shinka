#ifndef __INC_SERVICE_H__
#define __INC_SERVICE_H__

/*** YMIR Default Macros ***/
#define _IMPROVED_PACKET_ENCRYPTION_		// YMIR Paket şifreleme
#define __PET_SYSTEM__						// Eski Evcil hayvan sistemi
#define __UDP_BLOCK__						// UDP Paket bloklaması
/***************************************/
/*** Main Macros ***/
//OFFLINESHOP
#define __ENABLE_NEW_OFFLINESHOP__			// Ikarus Çevrimdışı Pazar
#define ENABLE_NEW_OFFLINESHOP_LOGS
#ifdef __ENABLE_NEW_OFFLINESHOP__
#define ENABLE_NEW_SHOP_IN_CITIES
#endif
//#define ENABLE_OFFLINESHOP_DEBUG
#ifdef ENABLE_OFFLINESHOP_DEBUG
#ifdef __WIN32__
#		define OFFSHOP_DEBUG(fmt , ...) sys_log(0,"%s:%d >> " fmt , __FUNCTION__ , __LINE__, __VA_ARGS__)
#else
#		define OFFSHOP_DEBUG(fmt , args...) sys_log(0,"%s:%d >> " fmt , __FUNCTION__ , __LINE__, ##args)
#endif
#else
#	define OFFSHOP_DEBUG(...)   
#endif

#define OFFLINE_SHOP							// Great Çevrimdışı pazar sistemi
#define GIFT_SYSTEM								// Günlük Hediye sistemi
#ifdef OFFLINE_SHOP
	#define SHOP_TIME_REFRESH 1*60				// Eski dükkanları yenileme süresi
	#define SHOP_BLOCK_GAME99					// Kanal99'da pazar kurulamasın
	#define SHOP_AUTO_CLOSE						// Otomatik dükkan kapatma
	#define SHOP_GM_PRIVILEGES GM_IMPLEMENTOR	// GM çevrimdışı pazar yetkileri.
	#define OFFLINE_SHOP_PM_NOTICE				// Satış PM Sistemi
#endif
#define __ENABLE_SHOP_SEARCH_SYSTEM__			// Eşya arama sistemi
#ifdef __ENABLE_SHOP_SEARCH_SYSTEM__
	#define __ENABLE_CORE_SHOP_SEARCH_SYSTEM__	// Çekirdekler arasi eşya arama sistemi
#endif
//OFFLINESHOP

#define ENABLE_2TH_SHOPEX_SYSTEM				// Genişletilmiş NPC Sistemi
#define __SEND_TARGET_INFO__					// mob target sistemi
#define __WEAPON_COSTUME_SYSTEM__ 				// silah kostümü sistemi
#define __ANTI_RESIST_MAGIC_BONUS__				// Büyü bozma taşı sistemi
#define __HIGHLIGHT_SYSTEM__					// eşya parlama efekti sistemi
#define __MOUNT_SYSTEM__						// yanında gezdirmeli binek sistemi
#ifdef __MOUNT_SYSTEM__
	#define __MS_BUG_WITH_MAPS__				// binek eşya bugu çözümü.
#endif
#define	__VIEW_TARGET_PLAYER_HP__				// rakip yaratığın yaşam puanını görme
#ifdef	__VIEW_TARGET_PLAYER_HP__
	#define __VIEW_TARGET_DECIMAL_HP__			// rakip yaratığın yaşam puanını yüzdeli şekilde görme
#endif
#define __NEW_BLEND_AFFECT__					// Perma Şebnem Sistemi
#define __ENABLE_MINIGAME_RUMI_EVENT__			// okey card etkinliği
#define __7AND8TH_SKILLS__						// yedinci ve sekizinci beceriler
#define __WOLFMAN_CHARACTER__					// Lycan karakteri
#define __VERSION_162__							// Büyülü orman tapınağı
#ifdef __VERSION_162__
	#define HEALING_SKILL_VNUM 265				// Yaşam becerisi kodu
#endif
#define __ENABLE_SHOW_STROKE_INFO__				// Yaratık vuruş sayacı
#define __ENABLE_CHEQUE_SYSTEM__				// Won parası sistemi
#define __ENABLE_SOULBIND_SYSTEM__				// Ruha bağlama sistemi
#define __ENABLE_TRADABLE_ICON__				// TR Tipi Slot marking sistemi
#define __ENABLE_CHARM_SYSTEM__					// TR Tipi tılsım sistemi
#define __ENABLE_CHANGELOOK_SYSTEM__			// TR Tipi yansıtma sistemi
#define __ENABLE_DICE_SYSTEM__					// Grup zar sistemi
#define __ENABLE_BONUS_STRONG_AGAINST_WEAPON__		// Silahlara karşı güçlü
#define __ENABLE_ELEMENT_NEW_BONUSES__			// Yeni element bonusları
#define __SAFEBOX_EX_SYSTEM__					// 5 li oyuncu deposu
#define __ENABLE_SHOP_DECORATION_SYSTEM__		// kaşmir paketi sistemi
#define __ENABLE_TARGET_ELEMENT_SYSTEM__		// canavar element sistemi
#define __ENABLE_EVENT_SYSTEM__					// TR Tipi etkinlik sistemi
#define __ENABLE_AUTO_HUNTING_SYSTEM__			// Otomatik av sistemi
#define __ENABLE_SUPPORT_SHAMAN_SYSTEM__		// Yardımcı şaman sistemi
#define __ENABLE_DROP_DIALOG_EX__				// Yeni eşya düşürme penceresi
#define __ENABLE_GUILD_LEADER_SYSTEM__			// Yeni lonca lider sistemi
#define __SASH_SYSTEM__							// TR Tipi kuşak sistemi
#define __SWITCH_CHANNEL_SYSTEM__				// TR Tipi kanal değiştirme sistemi
#define __QUIVER_SYSTEM__						// TR Tipi Ok çantası sistemi
#define __WJ_SHOW_MOB_INFO__					// TR Tipi Mob seviye agresif göster gizle
#define __ENABLE_VIEW_EQUIPMENT_SYSTEM__		// Ekipman görüntüleme sistemi
#define __ENABLE_ITEM_COMBINATION_SYSTEM__		// Eşya kombinasyon penceresi sistemi
#define __ENABLE_COSTUME_ENCHANT_SYSTEM__		// Kostüm efsunlama sistemi
#define __ENABLE_CUBE_RENEWAL__					// Arındırma paneli güncellemesi
#define __ENABLE_UPGRADE_SOCKET_SYSTEM__		// Eşya 4. cevher açma sistemi
#define __ENABLE_HEALTH_BOARD_SYSTEM__			// Yaşam göstergesi sistemi
#define __ENABLE_EXTEND_INVEN_SYSTEM__			// TR Tipi envanter genişletme sistemi
#define __ENABLE_EXCHANGE_WINDOW_SYSTEM__		// Yeni nesil ticaret sistemi
#define __ENABLE_SHOW_CHEST_DROP__				// Sandık aynası sistemi
#define __ENABLE_WEAPON_RARITY_SYSTEM__			// Evrimli silah sistemi
#define __ENABLE_NEW_PICKUP_SYSTEM__			// Evcil hayvan eşya toplama sistemi
#define __ENABLE_EXTENDED_BIOLOG_SYSTEM__		// Yeni biyolog sistemi
#define __ENABLE_MINIGAME_BOSSHUNTERS__			// Patron avcısı sistemi
#define __ENABLE_NEW_QUICK_SLOT_SYSTEM__		// Yeni quickslot sistemi
#define __ENABLE_AUTO_NOTICE_SYSTEM__			// Otomatik duyuru sistemi
#define __ENABLE_AUTO_EVENT_MANAGER__			// Otomatik etkinlik ve işlev yürütücüsü
#define __ENABLE_FISH_EVENT_SYSTEM__			// TR Balıkçılık etkinliği
#define __ENABLE_MAILBOX_SYSTEM__				// TR Mail Kutusu sistemi
#define __ENABLE_BASIC_ITEM__					// Yeni Başlangıç sistemi
#define	__ENABLE_SORT_INVENTORY__				// Envanter Düzenleme sistemi
#define __ENABLE_COSTUME_EVOLUTION__			// Kostüm parlama sistemi
#define __ENABLE_ACHIEVEMENT_SYSTEM__			// Başarı puanı sistemi
#define __ENABLE_NPC_RANGE_SYSTEM__				// Uzaktan NPC sistemi
#define __ENABLE_ALIGN_RENEWAL__				// Yeni derece güncellemesi
/*** New Macros ***/
#define UK_ENABLE_SPECIAL_STORAGE				// K Envanteri Sistemi
#define ENABLE_NEW_MAX_COUNT					// Yeni Stack Limiti
#define ENABLE_SYSTEM_RUNE						// Rün Sistemi
#define ENABLE_MULTISHOP						// Eşya ile Eşya Satma Sistemi
#define ENABLE_DS_GRADE_MYTH					// Mitsi Simya Sistemi
#define __DUNGEON_INFO_SYSTEM__					// Zindan Bilgi Sistemi
#define __CHAT_TYPE_SHOUT_TRADE__				// Ticaret Sohbet Kanalı
#define __CHAT_TYPE_BOSS_NOTICE__				// Boss Duyuru Kanalı
#define ENABLE_REFINE_MSG_ADD					// Yükseltme Uyarısı Sistemi
#define ENABLE_CMD_IPURGE_EX					// Genişletilmiş Purge Sistemi
#define ENABLE_PLAYER_TAG_SYSTEM				// Karakter ve Lonca Tag Sistemi
#define ENABLE_UNLIMITED_ITEM					// Limitsiz Eşyalar
#define ENABLE_CHECK_MAP_LEVEL_ON_LOGGIN		// Harita Seviye Kontrol Sistemi
#define ENABLE_FIX_BUG_POLYMORPH				// Dönüşümlü Oyuncuya Saldırı Engeli
#define ENABLE_FISHINGROD_RENEWAL				// Olta Yükseltme Genişletmesi
#define ENABLE_NEW_DUNGEON_TYPE					// Zindan Geri Dönüş Sistemi
#define ENABLE_DUNGEON_QUEUE					// Zindan Sıra Sistemi
#define ENABLE_D_NJGUILD						// Lonca Zindanı Sistemi
#define ENABLE_DS_CHANGE_ATTR					// Simya Bonus Değiştirme
#define MOB_DROP_ITEM_RENEWAL					// Mob Drop Harita Sistemi
#define WJ_EXTENDED_PET_SYSTEM					// Pet Envanter Giyme Sistemi
#define ENABLE_BLOOD_DUNGEON_SYSTEM				// Ronark Bölgesi Sistemi
#define ENABLE_ACCOUNT_LOCK						// Hesap Kilit Sistemi
#define ENABLE_NEW_PET_SYSTEM					// Offical Pet Sistemi
#ifdef ENABLE_NEW_PET_SYSTEM
#define ENABLE_PET_ATTR_DETERMINE				// Pet Sistemi Güçlendirme
#endif
#define ENABLE_BOSS_TRACKING					// Boss Takip Sistemi
#define ENABLE_SPIRIT_SYSTEM					// Ruh Sistemi
#define GUVENLI_EFSUN_SISTEMI					// Güvenli Efsun Nesnesi
#define ENABLE_ANCIENT_METAL					// Kadim Metal Sistemi
#define ENABLE_AFFECT_POLYMORPH_REMOVE			// Dönüşümden Çıkma Sistemi
#define UNLIMITED_ACCESSORY_SOCKET_TIME			// Süresiz Cevher Sistemi
#define ENABLE_POLY_SHOP						// Dönüşüm Küresi Marketi
#define ENABLE_REBIRTH							// Rebirth Sistemi
#define ENABLE_AURA_SYSTEM						// Aura Sistemi
#define ENABLE_CMD_WARP_IN_DUNGEON				// Zindan İçerisine Işınlanma Sistemi
#define ENABLE_UNIQUE_IMMORTALITY				// Moblara Ölümsüzlük Verme Quest Sistemi
#define ENABLE_NEW_TYPE_OF_POTION				// Açma Kapamalı Eşyalar Sistemi
#define ENABLE_TITLE_SYSTEM						// Karakter Rütbe Sistemi
#define __SKILLS_LEVEL_OVER_P__					// Sage Skill Sistemi
#define CHANGE_SKILL_COLOR						// Skill Renk Sistemi
#define __ENABLE_ALIGN_BONUS__					// Derece Bonus Sistemi
#define ENABLE_DEFENSAWE_SHIP					// Hidra Savunması Sistemi
#define ENABLE_MELEY_LAIR_DUNGEON				// Meley İni Sistemi
#define ENABLE_12ZI_CHAT						// Zodyak Notice Sistemi
#define ENABLE_BATTLE_PASS						// Savaş Bileti Sistemi
#define ENABLE_MINI_GAME_CATCH_KING				// TR Kralı Yakala Etkinliği
#define ENABLE_HALLOWEEN_EVENT_SYSTEM			// TR Cadılar Bayramı Etkinliği
#define ENABLE_ATTENDANCE_EVENT					// TR Patron Avcıları Etkinliği
#define ENABLE_MYSTERY_BOX_EVENT_SYSTEM			// Gizemli Sandık Etkinliği
#define ENABLE_IGNORE_LOWER_BUFFS				// Buff Oran Kontrol Sistemi
#define ENABLE_SPECIAL_CHAT						// Eşya Özel Notice Sistemi
#define __SYSTEM_SEARCH_ITEM_MOB__				// Mobda Eşya Arama Sistemi
#define __DS_SET__								// Simya Set Bonus Sistemi
#define __EXTENDED_DSS_RECHARGE__				// Simya Uzatma Sistemi
#define ENABLE_EXTENDED_DS_INVENTORY			// Simya Envanteri Genişletme Sistemi
#define ENABLE_FAST_SPLITITEM					// Hızlı Eşya Ayırma Sistemi
#define ENABLE_POPUP_WINDOW_INFO				// Pencere Popup Uyarı Sistemi
#define ENABLE_AFFECT_BUFF_REMOVE				// Buff Kapatma Sistemi
#define __DETACH_METIN__						// Eşya Taş Sökme Sistemi
#define ENABLE_BOX_OPENING						// Sandık Açma Becerisi Sistemi
#define ENABLE_CUBE_RENEWAL_WORLDARD			// Offical Arındırma Cube Sistemi
#define ENABLE_SWITCHBOT						// Server Taraflı Efsun Botu Sistemi
#define __ENABLE_GAYA_SYSTEM__					// TR Tipi Gaya Sistemi
#define ENABLE_GUILD_RANKED_SYSTEM				// Lonca Sıralama Sistemi
/***************************************/
/*** Hack Macros ***/
#define __ENABLE_HACK_TELEPORT_LOG__			// Işınlanma hilesi
#define __ENABLE_CHECK_GHOST_MODE__				// ölü mod hilesi
#define __ENABLE_HACKFIX_ANTI_SAFEZONE__		// güvenli alanda vurma hilesi
#define __ENABLE_CAMP_FIRE_FIX__				// kamp ateşi hilesi
#define __ENABLE_ANTI_DK__						// revive protection
#define __ENABLE_WAIT_HACK_COUNTER__			// wait hack sayacı
#define __ENABLE_ANTI_CMD_FLOOD__				// CMD Flood önlemi
#define __ENABLE_HWID_BAN_SYSTEM__				// HWID güvenlik önlemi
#define __ENABLE_SECURE_COMPUTER_SYSTEM__		// Güvenli bilgisayar sistemi
#define IS_LOW_GM_BLOCK_SYSTEM					// GM Engelleri Sistemi
#define __ENABLE_KILL_EVENT_FIX__				// Quest Kill Fix
//#define __ENABLE_SQL_LOGS__					// Oyun kayıtları
/***************************************/
/*** Utils Macros ***/
#define __ENABLE_CLEAR_OLD_GUILD_LANDS__		// Eski lonca arazilerini silinsin.
#define __ENABLE_COORDINATES_ON_COMMAND_USER__	// /user komutunda Oyuncu yanında koordinat gösterme
#define __ENABLE_FULL_NOTICE__					// Bagirma guncellemesi
#define __ENABLE_DEFAULT_PRIV_SYSTEM__			// varsayilan drop sistemi
#define __ENABLE_DRAGON_SOUL_ACTIVE_EFFECT__	// simya aktif efekti.
#define FIX_DESC_FIND_PC						// Karakter Adı Düzeltmesi
#define ENABLE_USER_LIMIT_CHECK					// Oyuncu Sayısı Kontrol Login
#define SINIRSIZ_MANA_SISTEMI					// Sınırsız Mana MP Sistemi
#define ENABLE_RED_BUFF							// Kırmızı Buff Sistemi
#define ENABLE_POISON_UNAGGR					// Canavarlar Zehir Yediginde Agresiflesmez
#define ENABLE_BRAVERY_CAPE_RENEWAL				// Bot Kontrol Engelli Pelerin
#define ENABLE_NON_CHECK_DS_QUALIFIED			// Simya Gorevi Devredisi Birakma
#define ENABLE_AUTO_QUERY						// Boot Esnasında Gereksiz Verileri Temizleme
#define ENABLE_ATLAS_MARK_INFO					// Minimap GF Güncellemesi
#define ENABLE_CUBE_RENEWAL_COPY_WORLDARD		// Cube Sistemi Bonus Eklentisi
#define ENABLE_CUBE_RENEWAL_GEM_WORLDARD		// Cube Sistemi Won Eklentisi
//#define REBOOT_LATER_RELOAD_ITEMS_PLAYER		// Kaybolan Eşyaların Geri Yüklenmesi
//#define __ENABLE_CHAT_LOGGING__				// Konusma kaydi gecmisi
/***************************************/
/*** Setting Macros ***/
#define INC_GOLD_MULTIPLER	5
/***************************************/

#endif
