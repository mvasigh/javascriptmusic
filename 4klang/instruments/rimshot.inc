	GO4K_ENV	ATTAC(0),DECAY(85),SUSTAIN(0),RELEASE(72),GAIN(128)
	GO4K_FST	AMOUNT(128),DEST(0*MAX_UNIT_SLOTS+2+FST_SET)
	GO4K_ENV	ATTAC(0),DECAY(56),SUSTAIN(0),RELEASE(0),GAIN(128)
	GO4K_FST	AMOUNT(108),DEST(6*MAX_UNIT_SLOTS+1+FST_SET)
	GO4K_FST	AMOUNT(72),DEST(7*MAX_UNIT_SLOTS+1+FST_SET)
	GO4K_FOP	OP(FOP_POP)
	GO4K_VCO	TRANSPOSE(64),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(32),GAIN(64),FLAGS(SINE)
	GO4K_VCO	TRANSPOSE(64),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(80),GAIN(64),FLAGS(SINE)
	GO4K_VCO	TRANSPOSE(64),DETUNE(64),PHASE(0),GATES(85),COLOR(64),SHAPE(64),GAIN(64),FLAGS(NOISE)
	GO4K_VCF	FREQUENCY(104),RESONANCE(128),VCFTYPE(LOWPASS)
	GO4K_FOP	OP(FOP_ADDP)
	GO4K_FOP	OP(FOP_ADDP)
	GO4K_FOP	OP(FOP_MULP)
	GO4K_VCF	FREQUENCY(23),RESONANCE(32),VCFTYPE(HIGHPASS)
	GO4K_VCF	FREQUENCY(80),RESONANCE(54),VCFTYPE(HIGHPASS)
	GO4K_VCF	FREQUENCY(56),RESONANCE(3),VCFTYPE(ALLPASS)
	GO4K_DLL	PREGAIN(63),DRY(128),FEEDBACK(60),DAMP(64),FREQUENCY(0),DEPTH(0),DELAY(17),COUNT(1) ; ERROR
	GO4K_PAN	PANNING(64)
	GO4K_OUT	GAIN(3), AUXSEND(0)
